/*
    Write a program that generated the first 20 fibonacci numbers and store them into an array of size 20.
*/

#include <stdio.h>

int main()
{
    int fib[20]; // Array to store the first 20 Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Generate Fibonacci sequence
    for (int i = 2; i < 20; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci numbers
    printf("First 20 Fibonacci numbers:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", fib[i]);
    }

    return 0;
}