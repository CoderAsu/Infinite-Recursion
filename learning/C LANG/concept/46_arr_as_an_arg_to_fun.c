// Array as an Argument to a Function

#include <stdio.h>

int add(int [], int);

int main(){
    int a[] = {1, 2, 3, 4};
    int len = sizeof(a)/sizeof(a[0]);

    printf("%d", add(a, len)); // we are not passing the whole array. We are just passing the base address of the array.
    return 0;
}

int add(int b[], int len){
    int sum = 0, i;
    for(i = 0; i < len; i++){
        sum += b[i];
    }
    
    return sum;
}
