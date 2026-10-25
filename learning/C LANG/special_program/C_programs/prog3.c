// Q3. WAP to check if a given number is even/odd/divisible by n.

#include <stdio.h>

int main(){

    int num, div;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter divisior: ");
    scanf("%d", &div);

    // check even or odd

    if(num % 2 == 0)
        printf("The number %d is even \n", num);

    else
        printf("The number %d is odd \n", num);

    
    // check divisibility

    if (div != 0){
        
        if(num % div == 0)
            printf("%d is divisible by %d \n", num, div);

        else
            printf("%d is not divisible by %d \n", num, div);
    }
    else{
        printf("Divisor can't be zero\n");
    }

    return 0;
}

/*
    Output:

    Enter a number: 65
    Enter divisior: 12
    The number 65 is odd 
    65 is not divisible by 12
*/