/*
    An array is a data structure containing a number of data values (all of which are of same type). 
    
    Data Structure is a format for organizing and storing data.

    Also, each data structure is designed to organize data to suit a specific purpose.

    The simplest form of array one can imagine is one dimensional array.
*/

/*
    Declaration and Definition of 1D Array

    syntax: data_type array_name[no. of elements];

    The length of an array can be specified by any positive integer constant expression.

    Specifying the length of an array using macro is considered to be an excellent practice.

*/


/*
    Accessing Elements from 1D Array

    To access an array element, just write:
        array_name[index]

    Accessing the first element of an array: arr[0]
    Accessing the second element of an array: arr[1]
*/


/*
    Initializing 1D Array

    Method 1:
    arr[5] = {1, 3, 78, 23, 106};



    Method 2:
    arr[] = {1, 56, 993, 256, 3223};



    Method 3: 
    int arr[5];

    arr[0] = 6;
    arr[1] = 32;
    arr[2] = 64;...



    Method 4:
    int arr[5];

    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }


    Method 1 and 3 is not a preferred method.



    Q. What if number of elements are lesser than the length specified?

    int arr[10] = {45, 6, 2, 545, 33};

    A. The remaining locations of the array are filled by value 0.

    int arr[10] = {45, 6, 2, 545, 33, 0, 0, 0, 0, 0};



    Q. Why not int arr[10] = {}; ?

    A. Because, this is illegal. You must have to specify at least 1 element. It cannot be completely empty and it is also illegal to add more elements than the length of an array.



    # Easy way to initialize an array with all zeros is given by:

    int arr[10] = {0};
*/





/*
    Designated Initialization of Arrays

    int arr[10] = {[0] = 1, [5] = 2, [6] = 3};

    This way of initialization is called designated initialization. And each number in the square brackets is said to be a designator.



    Advantages:
    1. No need to bother about the entries containing zeros.

    int arr[10] = {[0] = 1, [5] = 2, [6] = 3};
    int arr[10] = {1, 0, 0, 0, 0, 2, 3, 0, 0, 0};

    2. No need to bother about the order at all.

    int arr[10] = {[0] = 1, [5] = 2, [6] = 3};
    int arr[10] = {[6] = 3, [0] = 1, [5] = 2};



    Note: If the length of an array is 'n', then each designator must be between 0 and n-1.




    Q. What if I won't mention the length?

    A. -> Designators could be any non-negative integer.
    -> Compiler will deduce the length of the array from the largest designator in the list.

    int arr[] = {[0] = 1, [49] = 2, [6] = 3};
    
    Because of the designator, maximum length of this array would be 50.






    Finally, No One can stop you from doing this:

    int a[] = {1, 7, 5, [5] = 90, 44, [8] = 62};
    int a[] = {1, 7, 5, 0, 0 , 90, 44, 0 , 62};



    But, if there is a clash, then designated initializer will win.

    int a[] = {1, 3, 6, [2] = 32, [6] = 45};
    int a[] = {1, 3, 32, 0, 0, 0, 45};

*/  


/*

    Counting Array Elements using sizeof() Operator

    size of 1 array element * number of elements = size of whole array

*/


#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 45, 87, 23, 44, 56 , 97};

    int number, whole_arr;

    number = sizeof(arr)/sizeof(arr[0]);
    whole_arr = sizeof(arr[0]) * number;

    printf("Number of elements in arr is %d \n", number);
    printf("Size of whole array is %d", whole_arr);

    return 0;
}

