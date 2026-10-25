// Q13. WAP to read a number from the user and print the sum of its digits.

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        switch(digit) {
            case 0: sum += 0; break;
            case 1: sum += 1; break;
            case 2: sum += 2; break;
            case 3: sum += 3; break;
            case 4: sum += 4; break;
            case 5: sum += 5; break;
            case 6: sum += 6; break;
            case 7: sum += 7; break;
            case 8: sum += 8; break;
            case 9: sum += 9; break;
        }

        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

/*
    Output:

    Enter a number: 324571
    Sum of digits = 22
*/