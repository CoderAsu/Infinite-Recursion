/*
    Q23. WAP to read n number from user with stop criteria '-1' and print 
    the sum of the even number.
*/ 

#include <stdio.h>
int main(){

    int num, even_sum = 0;

    while(1){

        printf("Enter a value: ");
        scanf("%d", &num);

        if(num == -1)
            break;

        if(num % 2 == 1)
            continue;

        even_sum += num;

    }

    printf("Sum of all even numbers = %d \n", even_sum);

    return 0;
}

/*
    Output:

    Enter a value: 345
    Enter a value: 458
    Enter a value: 932
    Enter a value: 934
    Enter a value: 662
    Enter a value: 457
    Enter a value: -1
    Sum of all even numbers = 2986
*/