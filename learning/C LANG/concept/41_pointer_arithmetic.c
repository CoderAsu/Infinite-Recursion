/*
    Pointer Addition:

    int *p;
    int a[] = {23, 45, 12, 67, 34, 89, 23};
    p = &a[0];

    p = p + 3  => means moving the pointer 3 positions in forward direction.



    Let the base address of the array be 1000, 1004, 1008, ..., 1028

    Actually what happened?
    p = p + 1   ==   p = 1000 + 1 * 4 = 1004

*/



/*
    Pointer Subtraction

    int *p;
    int a[] = {23, 45, 12, 67, 34, 89, 23, 76};
    p = &a[4];

    p = p - 3  => means moving the pointer 3 positions in backward direction.



    Subtraction one pointer from another pointer
    result is distance between pointers

    int *p = &a[2];
    int *q = &a[6];


    In reality.. 

    If base address of array is 1000
    p = 1008    q = 1020

    p = 1008, q = p + 4   ===   1028 = 1008 + 5 * 4  ===  (q = p + n * 4)
    q - p = 4   ==  (1024 - 1008) / 4 = 4 
    The number 4 is divided known as number of bytes in integer

    Performing arithmetic on pointers which are not pointing to array element leads to undefined behavior

    Example:
    int main(){
        int i = 10;
        int *p = &i;

        printf("%d", *(p + 3));

        return 0;
    }

    Output:
    Different outputs everytime



    If two pointers are pointing to different arrays then performing subtraction between them leads to undefined behavior.
*/




/*
    Pointer increment & decrement

    Pre/post Increment

    int main(){
        int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
        int *p = &a[0];

        printf("%d ", *(p++));
        printf("%d ", *(++p));
        printf("%d", *p);

        return 0;
    }

    Output: 
    5 7 7


    Pre and Post decrement uses same concept like pre/post increment.
*/



/*

    Comparing to Pointers

    -> Use relational operators(<, >, <=, >=) and equality operators(==, !=) to compare pointers.

    -> Only possible when both pointers point to same array.
    
    -> Output depends upon the relative positions of both the pointers.

    Example:

    int main(){
        int a[] = {1, 2, 3, 4, 5, 6};
        int *p = &a[3];
        int *q = &a[5];

        printf("%d\n", p <= q);     Output: 1
        printf("%d\n", p >= q);     Output: 0
        q = &a[3];
        printf("%d", p == q);       Output: 1

        return 0;
    }

*/


#include <stdio.h>
int main(){

    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for(p = &a[0]; p <= &a[4]; p++)
        sum += *p;

    printf("Sum is %d", sum);
    printf("\n");

    return 0;
}