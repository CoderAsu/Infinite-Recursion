// Q11. WAP to check if a input charcter is a vowel using switch case.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("It is a vowel.\n");
            break;
        default:
            printf("It is not a vowel.\n");
    }

    return 0;
}

/*
    Output:

    Enter a character: r
    It is not a vowel.
*/