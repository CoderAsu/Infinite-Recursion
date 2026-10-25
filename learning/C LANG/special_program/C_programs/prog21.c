// Q21. WAP to read 10 numbers from the user and print the max value and min value.

#include <stdio.h>

int main() {
    int num, max, min;

    printf("Enter 10 integers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (i == 1) {
            max = min = num;  
        } else {
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
    }

    printf("\nMaximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}

/*
    Output:
    
    Enter 10 integers:
    Number 1: 54
    Number 2: 65
    Number 3: 934
    Number 4: 324
    Number 5: 289
    Number 6: 90
    Number 7: 74
    Number 8: 625
    Number 9: 99
    Number 10: 10000

    Maximum value = 10000
    Minimum value = 54
*/
