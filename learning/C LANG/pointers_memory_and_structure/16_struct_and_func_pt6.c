/*
    Passing Array of structures as argument

    struct abc{
        int a;
        char b;
    };

    struct abc arr[2] = {{1, 'A'}, {2, 'B'}};

    compiler will allocate contiguous block of memory for the data members of the structure.
*/

#include <stdio.h>

struct point{
    int x;
    char y;
};

void print(struct point arr[]){
    int i;
    for(i = 0; i < 2; i++)  
        printf("%d %d\n", arr[i].x, arr[i].y);
};

int main(){
    struct point arr[2] = {{1, 2}, {3, 4}};
    print(arr);
    return 0;
}