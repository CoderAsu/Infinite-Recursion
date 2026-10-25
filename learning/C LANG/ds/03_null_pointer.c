/*
    What is a NULL Pointer?
    A NULL pointer is a pointer that does not point to any memory location. It represent an invalid memory location.

    When a NULL value is assigned to a pointer, then the pointer is considered as null pointer.



    Use of NULL pointer
    1. It is used to initialize a pointer when that pointer isn't assigned any valid memory address yet.
    2. Useful for handling errors when using malloc function.




    Facts about NULL Pointer
    1. The value of NULL is 0. We can either use NULL or 0 but this 0 is written in context of pointers and is not equivalent to the integer 0.
    2. Size of NULL pointer depends upon the platform and is similar to the size of the normal pointers.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = NULL;

    int *p1;
    p1 = (int*)malloc(2*sizeof(int));
    if(p1 == NULL)
        printf("Memory could not be allocated\n");
    else
        printf("Memory allocated successfully\n");


    printf("%d\n", ptr);
    printf("%d", sizeof(NULL));
    return 0;
}