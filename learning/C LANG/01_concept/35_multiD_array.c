/*

    Multidimensional arrays can be defined as an array of arrays.

    General form of declaring N-dimensional array is as follows:
        data_type array_name[size1][size2]...[sizeN];

    For example:
    int a[3][4];    Two Dimensional Array
    int a[3][4][6]; Three Dimensional Array


    Size of multidimensional array can be calculated by multiplying the size of all the dimensions.

    For Example:
    size of a [10][20] = 10 * 20 = 200 = 200 * 4 = 800 bytes
    we can store upto 200 elements in this array.

*/



/*

    Introduction of two dimensional Arrays

    The basic form of declaring two dimensional array is:
        data_type array_name[x][y]; where x and y are representing the size of the array
        x denotes number of rows and y denotes number of columns



    How to initialize two dimensional array?

    Method 1:
    int a[2][3] = {1, 2, 3, 4, 5, 6};

    Method 2:
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    output:
    1  2  3
    4  5  6.     



    How to access 2D array elements?

    Using row index and column index.

    For example:
    we can access element stored in 1st row and 2nd column of below array

    1  2  3
    4  5  6

    a[0][1]      output: 2



    How to print 2D array elements?

    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
    }

*/



/*

    Introduction to three dimensional arrays

    int arr[x][y][z];
    here x represent number of blocks, y represents no. of rows and z represents no. of columns

    

    How to initialize three dimensional array?

    Method 1:
    int a[2][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    Method 2:
    int a[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    Output:

    1  2  3       7   8   9
    4  5  6       10  11  12
}



*/


#include <stdio.h>

int main(){

    int TwoD_Arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int access_2D;
    access_2D = TwoD_Arr[1][2];

    printf("%d\n\n", access_2D);

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", TwoD_Arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    



    int ThreeD_Arr[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    int access_3D;
    access_3D = ThreeD_Arr[1][0][1];

    printf("%d\n\n\n", access_3D);

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                printf("%d ", ThreeD_Arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");     
    }

    return 0;
}