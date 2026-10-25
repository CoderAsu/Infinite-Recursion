/*
    Perfect number is a positive integer that is equal to the sum of all its proper positive divisors excluding the number itself.
    
    For example:
    6 is a perfect number
    Because the proper positive divisors of 6 are 1, 2 and 3 (excluding 6) and sum of all its positive divisors i.e 1 + 2 + 3 = 6.
*/

#include <stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int i, rem, sum = 0;
    for(i = 1; i < number; i ++){
        rem = number % i;
        if(rem == 0){
            sum += i;
        }
    }
    if(sum == number)
        printf("%d is a perfect number", number);
    else
        printf("%d is not a perfect number", number);
    
    return 0;
}