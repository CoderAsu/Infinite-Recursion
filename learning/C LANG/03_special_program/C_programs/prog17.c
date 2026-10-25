/*
Q17. WAP to read 10 values from the user and print the sum of all 
the even no. and odd no. separately.
*/ 

#include <stdio.h>

int main() {
    int count = 0;
    int num;
    int evenSum = 0, oddSum = 0;

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (num % 2 == 0)
            evenSum += num;
        else
            oddSum += num;

        count++;
    }

    printf("\nSum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

/*
    Output:

    Enter number 1: 56
    Enter number 2: 23
    Enter number 3: 92
    Enter number 4: 45
    Enter number 5: 63
    Enter number 6: 22 
    Enter number 7: 566
    Enter number 8: 943
    Enter number 9: 34
    Enter number 10: 352

    Sum of even numbers: 1122
    Sum of odd numbers: 1074
*/