#include <stdio.h>
int main(){
    int arr[2][2] = {{1, 2}, {3, 4}};
    int row = 2, col = 2;
    int *p;
    
    for(p = &arr[0][0]; p <= &arr[row - 1][col - 1]; p++)
        printf("%d", *p);
        printf("\n");

    return 0;
}



/*
1D Array

int a[4] = {1, 2, 3, 4};

means array of 4 integers
*a => pointer to first element of the array

a => 1000
*a => 1





2D Array

int a[2][2] = {1, 2, 3, 4};
first block contains two 1D arrays, 2nd block contains each of which contains 2 elements



*a => pointer to the first element of first 1D array => *(a+0) => a[0] => &a[0][0]
**a => *(*a) => *(*(a+0)) => *(&a[0][0]) => a[0][0] => 1


*(a+1) => pointer to the first element of the second 1D array
**(a+1) => *(pointer to the 1st element of 2nd 1D array) => 3

*(a+1)+1 => pointer to the 1st element of 2nd 1D array + 1 => pointer to the 2nd element of 2nd 1D array
*(*a+1)+1) => *pointer to the 2nd element of 2nd 1D array => 4 => a[1][1]




*/