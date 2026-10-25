/* 
    Prime number: A number greater than 1 is called a prime number, if it has only two factors, namely 1 and the number itself.
    Example: 2, 3, 5, 7, 11...

    Composite number: It is a positive integer which is not prime i.e which has factors other than 1 and itself.
    Example: 4, 6, 8, 9, 10...


    Question - Is 1 a prime number?
    Sol - No, it is not a prime number because according to the definition of prime number - A prime number is a number which has exactly two divisiors, 1 and itself. But 1 has only one divisor i.e itself. Therefore it is not a prime number.
    Another reason - It violates the fundamental theorem of arithmetic. According to this theorem, every positive integer greater than one can be written uniquely as the product of primes.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int num, i, val1, val2, count = 0;
    printf("Please enter a number (only positive integers): ");
    scanf("%d", &num);

    val1 = ceil(sqrt(num));
    val2 = num;

    for(i = 2; i <= val1; i++){
        if(val2 % i == 0)
            count = 1;
    }

    if((count == 0 && val2 != 1) || val2 == 2 || val2 == 3)
        printf("%d is a prime number", val2);
    else
        printf("%d is not a prime number", val2);

    return 0;
}