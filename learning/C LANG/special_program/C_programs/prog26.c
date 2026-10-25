/*
    Q26. Write a program to read 10 integer values from the user, swap the first value 
    with the last value in the array and print the array elements.
*/

#include <stdio.h>

int main(){

    int numbers[10];
    int i, temp;

    printf("Enter 10 integer values: \n");

    for(i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
    }

    temp = numbers[0];
    numbers[0] = numbers[9];
    numbers[9] = temp;

    printf("\nArray after swapping first and last values: \n");

    for(i = 0; i < 10; i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}

/*
    Output:    

    Enter 10 integer values: 
    24 25 89 34 65 90 12 11 67 48

    Array after swapping first and last values: 
    48 25 89 34 65 90 12 11 67 24 
*/
