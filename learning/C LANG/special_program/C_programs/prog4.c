// Q4. WAP to check if a given character is a vowel/upper/lower case.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // check vowel

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
    || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a vowel \n", ch);
    
    else
        printf("%c is not a vowel \n", ch);


    // check case using ASCII

    if(ch >= 'A' && ch <= 'Z')
        printf("%c is in uppercase \n", ch);

    else if (ch >= 'a' && ch <= 'z')
        printf("%c is in lowercase \n", ch);

        
    else    
        printf("%c is not an alphabet character \n", ch);

    return 0;
}

/*
    Output:

    Enter a character: U
    U is a vowel 
    U is in uppercase
*/