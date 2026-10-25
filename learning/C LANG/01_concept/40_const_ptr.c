#include <stdio.h>

int main(){

    int x = 10;
    int y = 20;

    // pointer to a constant
    // In this we cannot change the value of x and y but can reassign more than one address

    const int *ptr;
    ptr = &x;
    ptr = &y;



    // constant pointer
    // In this we cannot reassign more than one address but can change the value of x and y

    int *const ptr2 = &y;

    *ptr2 = 1000;







    return 0;
}