/*
Introduction to C string library

There are some operations which we can perform on strings.

for example: copy strings, concatenate strings, select substrings and so on.

<string.h> library contains all the required functions for performing string operations.

*/

/*
    strcpy (string copy) function

    prototype: char* strcpy(char* destination, const char* source)

    strcpy is used to copy a string pointed by source (including null character to the destination (character array)

*/


/*
    A word of caution !

    In the call to strcpy(str1, str2), there is no way the strcpy will check whether the string pointed by str2 will fit in str1.

    If the length of the string pointed by str2 is greater than the length of the character array str1 then it will be an undefined behaviour.

    To avoid this we call strncpy function.

    strncpy(destination, source, sizeof(destination));

    strncpy will leave the string in str2 (destination) without terminating a null character. If the size of str1 (source) is equal to or greater than the size of str2 (destination).

*/

#include <stdio.h>
#include <string.h>

int main(){

    // strcpy

    char str1[10] = "Hello";
    char str2[10];

    printf("%s\n", strcpy(str2, str1));
    printf("%s\n", str2);


    // we can also chain together as series of strcpy calls

    char str3[10] = "World";
    char str4[10];
    char str5[10];

    strcpy(str5, strcpy(str4, str3));
    printf("%s, %s\n", str4, str5);



    // strncpy

    char str6[6] = "Hello";
    char str7[5];

    strncpy(str7, str6, sizeof(str7));
    str7[sizeof(str7) - 1] = '\0';
    printf("%s", str7);
    return 0;
}