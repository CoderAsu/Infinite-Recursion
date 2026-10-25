// Q18. WAP to read 10 values from user and how many are divisible by 5.

#include <stdio.h>

int main() {
    int count = 0;
    int num;
    int divisibleBy5 = 0;

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (num % 5 == 0)
            divisibleBy5++;

        count++;
    }

    printf("\nTotal numbers divisible by 5: %d\n", divisibleBy5);
    
    return 0;
}

/*
    Output: 

    Enter number 1: 575
    Enter number 2: 23
    Enter number 3: 450
    Enter number 4: 721
    Enter number 5: 530
    Enter number 6: 20
    Enter number 7: 61
    Enter number 8: 699 
    Enter number 9: 8995
    Enter number 10: 434

    Total numbers divisible by 5: 5
*/