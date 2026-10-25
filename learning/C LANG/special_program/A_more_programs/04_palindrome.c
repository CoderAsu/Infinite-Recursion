/*
    A number or a word or a phrase if read backwards gives the same number or a word or a phrase as it is being read forward.
    ex: 1221, racecar, 24542 etc.
*/


#include <stdio.h>

int main(){
    int n, result = 0, q, rem;
    printf("Please enter the number: ");
    scanf("%d", &n);

    q = n;

    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }

    if(result == n)
        printf("It's a palindrome");
    else
        printf("No, it's not a palindrome");
    
    return 0;
}