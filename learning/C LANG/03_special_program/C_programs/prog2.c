// Q2. WAP to check if a given number is positive/negative/zero/non-zero.

#include <stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is positive and non-zero \n", num);

    else if (num < 0)
        printf("%d is negative and non-zero \n", num);
        
    else
        printf("The number is zero (not non-zero) \n");
    
    return 0;
}

/*
    Output:

    Enter a number: 34
    34 is positive and non-zero 
*/