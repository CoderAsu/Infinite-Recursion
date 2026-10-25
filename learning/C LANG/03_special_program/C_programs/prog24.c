/*
   Q24. Write a program to read 10 integers into an array and display their average.
*/
#include <stdio.h>
int main(){

    int numbers[10];
    int i, sum = 0;
    float average;

    printf("Enter 10 integer values: \n");

    for(i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 10.0;

    printf("The average of the 10 numbers is: %.2f\n", average);

    return 0;
}

/*
    Output:

    Enter 10 integer values: 
    23 45 66 78 11 56 99 100 32 76
    The average of the 10 numbers is: 58.60
*/