/*
    Write a program that accept a number from user and print that in reverse form, i.e (123 to 321)
*/

#include <stdio.h>

int main() {
    int num, reverse = 0;

    // Accept input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}