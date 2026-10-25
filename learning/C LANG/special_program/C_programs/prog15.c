// Q15. WAP to print the sum of 10 numbers starting from 201.

#include <stdio.h>

int main() {
    int start = 201;
    int count = 0;
    int sum = 0;

    while (count < 10) {
        sum += start;
        start++;
        count++;
    }

    printf("Sum of 10 numbers starting from 201 is: %d\n", sum);
    
    return 0;
}

/*
    Output:

    Sum of 10 numbers starting from 201 is: 2055
*/


