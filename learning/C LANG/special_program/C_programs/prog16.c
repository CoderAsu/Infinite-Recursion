// Q16. WAP to print the sum of all the even numbers between 51 - 90.

#include <stdio.h>

int main() {
    int num = 52;
    int sum = 0;

    while (num <= 90) {
        sum += num;
        num += 2; 
    }

    printf("Sum of all even numbers between 51 and 90 is: %d\n", sum);
    
    return 0;
}

/*
    Output:

    Sum of all even numbers between 51 and 90 is: 1420
*/