/*
    Structure Variable as an argument

    Instead of passing structure members individually, it is a good practice to pass a structure as an argument.

    Unlike arrays, name of the structure variables are not pointers.

*/

// Call by Value

#include <stdio.h>

struct point{
    int x;
    int y;
};

void print(struct point p){
    printf("%d %d\n", p.x, p.y);
}

int main(){
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};

    print(p1);
    print(p2);

    return 0;
}