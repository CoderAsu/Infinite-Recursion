/*
    Either one dimensional or multi-dimensional arrays can be made constant by starting the declaration with the keyword const.

    It assures us that the program will not modify the array which may contain some valuable information.

    It also helps the compiler to catch errors by informing that there is no intention to modify this array.
*/


#include <stdio.h>

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    arr[1] = 99;
    int changes = arr[1];
    printf("The value of 1 index is %d", changes);

    const int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // arr2[5] = 42;  here we can't make the changes otherwise it will give an error

    return 0;
}