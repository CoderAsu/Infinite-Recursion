/*
    An armstrong number of order n is a number in which each digit when multiplied by itself n number of times and finally added together, results the same number.

    for example:
    371 is a 3 digit number. Therefore, its order is 3.
    Now here, each digit is multiplied by itself 3 times and finally added together and results in our original number i.e. 
    3*3*3 + 7*7*7 + 1*1*1 = 371
*/

#include <stdio.h>

int main(){
    int number, count = 0, result = 0, mul = 1, cnt, rem;
    printf("Please enter a number: ");
    scanf("%d", &number);

    int q = number;
    while (q != 0)
    {
        q /= 10;
        count++;
    }

    cnt = count;
    q = number;

    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            mul *= rem;
            cnt--;
        }
        result += mul;
        cnt = count;
        q /= 10;
        mul = 1;
    }

    if(result == number)
        printf("%d is an armstrong number", number);
    else
        printf("%d is not an armstrong number", number);
    
    return 0;
}
