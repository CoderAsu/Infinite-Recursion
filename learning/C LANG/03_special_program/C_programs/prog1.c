// Q1. Write a program to print the smallest/greatest value out of two number

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(a > b)
        printf("%d is greater\n", a);
    else
        printf("%d is greater\n", b);

    return 0;
}

/*
    Output:
    
    Enter first number: 243
    Enter second number: 4355
    4355 is greater
*/