/*

    Declaring a string variable
    
    A string variable is a 1D array of characters that is capable of holding a string at a time.
    for example: char s[6];

    Note: Always make the array one character longer than the string. If length of the string is 5 characters long then don't forget to make extra room for null character.

    Failing to do the same may cause unpredictable results when program is executed as same C libraries assume the strings or null terminated.

*/


/*

    Initializing a string variable

    Example: char s[6] = "Hello";

    H   e   l   l   o   \0

    Althougn, it seems like "Hello" in the above example is a string literal but it is not.

    When a string is assigned to a character array, then this character array is treated like other types of arrays. We can modify its characters.

    char s[6] = "Hello";
    char s[6] = {'H', 'e', 'l', 'l' 'o', '\0'};
    They both are equal


    Recall: we can't modify a string literal
    char *ptr = "Hello";
    *ptr = 'M';

    But we can modify a character array.
    char s[6] = "Hello";
    s[0] = 'M';



    Short Length Initializer

    char s[7] = "Hello";

    H   e   l   l   o   \0  \0


    Long length Initializer

    char s[4] = "Hello";

    H   e   l   l

    Rest of the part is truncated

    Warning: Initializer string for array of chars is too long.

*/

#include <stdio.h>
int main(){

    // Equal Length Initializer
    char s[5] = "Hello";
    char t[5];

    int i;
    for(i = 0; s[i] != '\0'; i++){
        t[i] = s[i];
    }

    printf("%s", t);
    printf("\n");


    // Short Length Initializer
    char u[6] = "Hello";
    char v[6];

    int j;
    for(j = 0; u[j] != '\0'; j++)
        u[i] = v[i];
    
    printf("%s", v);


    // Long Length Initializer
    char x[4] = "Hello";
    char y[6];

    int k;
    for(k = 0; x[k] != '\0'; k++)
        x[i] = y[i];
    
    printf("%s", y);

    return 0;
}


/*
    Omitting the Length
    char s[] = "Hello";

    Automatically, the compiler sets aside 6 characters for s, u, x which is enough to store the string "Hello" with null character.
*/