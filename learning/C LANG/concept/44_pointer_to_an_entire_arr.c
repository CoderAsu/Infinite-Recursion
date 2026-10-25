/*
    Pointer to an entire array

    int (*p)[5]; => pointer to the whole array of 5 elements

    read like this: p is a pointer to 5 integer elements

    passing address
    int (*p)[5] = &a;


    why we are passing &a?

    for example in 2d array
    b[2][2] = {1, 2, 3, 4};

    b = pointer to 1st 1D array
    *b = pointer to 1st element of 1st 1D array
    &*b = pointer to 1st 1D array

    similarly
    a = pointer to the 1st element of the array
    &a = pointer to the whole array
    

*/

#include <stdio.h>
int main(){
    int a[5] = {23, 42, 12, 36};
    int (*p)[5] = &a;

    printf("%d\n", **p);



    int arr[2][2] = {1, 2, 3, 4};
    int (*p1)[2] = arr;   // pointer to array of 2 ints

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(*(p1 + i) + j));
        }
        printf("\n");
    }

    return 0;
}


/*
    Diff bet *p[10] and (*p)[10]

    1. *p[10] meaning p is an array of 10 pointers.
    Each element of p is a pointer to some data type (e.g., int*)

    usage:
    int *p[10];
    you can store addressess of 10 different integers


    Example:
    int a = 5, b = 10;
    p[0] = &a;
    p[1] = &b;
    printf("%d %d\n", *p[0], *p[1]);

    Output: 5 10



    2. (*p)[10] meaning p is a pointer to an array of 10 elements. In other words, p points to a block of 10 contiguous elements.

    Usage:
    int (*p)[10];
    you can make p point to an actual array of 10 integers

    Example:
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    p = &arr;   // p points to the whole array
    printf("%d\n", (*p)[3]);  // Output: 4


*/



/*
Problem: 


#include <stdio.h>
int main(){
    int a[][3] = {1, 2, 3, 4, 5, 6};
    int (*ptr)[3] = a;
    printf("%d %d ", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d %d", (*ptr)[1], (*ptr)[2]);
    return 0;
}


    (*ptr)[1] = *((*ptr) + 1)

*/