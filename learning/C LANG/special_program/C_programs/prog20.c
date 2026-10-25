/*
    Q20. WAP to read few positive and negative numbers, find the average of all positive and 
    negative numbers separately.
*/ 

#include <stdio.h>

int main() {
    int num, pos_sum = 0, neg_sum = 0;
    int pos_count = 0, neg_count = 0;
    int total;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &total);

    printf("Enter %d integers (positive or negative):\n", total);

    for (int i = 1; i <= total; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            pos_sum += num;
            pos_count++;
        } else if (num < 0) {
            neg_sum += num;
            neg_count++;
        }
    }

    if (pos_count > 0)
        printf("\nAverage of positive numbers = %.2f\n", 
        (float)pos_sum / pos_count);
    else
        printf("\nNo positive numbers entered.\n");

    if (neg_count > 0)
        printf("Average of negative numbers = %.2f\n", 
        (float)neg_sum / neg_count);
    else
        printf("No negative numbers entered.\n");

    return 0;
}

/*
    Output:

    How many numbers do you want to enter? 4
    Enter 4 integers (positive or negative):
    Number 1: -45
    Number 2: 98
    Number 3: -2
    Number 4: 659 

    Average of positive numbers = 378.50
    Average of negative numbers = -23.50
*/