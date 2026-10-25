/*
    strlen() function is used to determine the length of the given string.

    prototype: strlen(const char* str);

    To the strlen() function, we should pass the pointer to the first character of the string whose length we want to determine.

    And as a result, it returns the length of the string.

    Note: It doesn't count NULL character.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char *str = "Hello World";
    printf("%d\n", strlen(str));

    char str2[100] = "Hello World";
    printf("%d\n", strlen(str2));
    return 0;
}