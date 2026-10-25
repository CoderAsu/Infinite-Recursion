/*
    3 rows -> 5 columns
    4 rows -> 7 columns
    5 rows -> 9 columns
    6 rows -> 11 columns

    If n is no. of rows, then 2n-1 will be no. of columns
*/

#include <stdio.h>

int main() {
    int i, j, space, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
