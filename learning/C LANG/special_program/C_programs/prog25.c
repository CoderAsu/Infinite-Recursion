// Q25. WAP to read 10 float values from the user and print the smallest and largest value.

#include <stdio.h>
int main(){
    float numbers[10];
    float smallest, largest;
    int i;

    printf("Enter 10 float values: \n");

    for(i = 0; i < 10; i++){
        scanf("%f", &numbers[i]);
    }

    smallest = largest = numbers[0];

    for(i = 1; i < 10; i++){

        if(numbers[i] < smallest)
            smallest = numbers[i];

        if(numbers[i] > largest)
            largest = numbers[i];
    }

    printf("Smallest value: %.2f\n", smallest);
    printf("Largest value: %.2f\n", largest);

    return 0;
}

/*
    Output:

    Enter 10 float values: 
    23.4
    56
    28.44
    89.13
    33.34
    93.4
    72.18
    23.44
    32.65
    54.89
    Smallest value: 23.40
    Largest value: 93.40
*/