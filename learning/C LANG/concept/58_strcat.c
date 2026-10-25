/*
    strcat (string concatenate) function

    prototype: char* strcat(char* str1, const char* str2);

    strcat function appends the content of string str2 at the end of the string str1

    It returns the pointer to the resulting string str1
*/

/*
    Caution
    An undefined behaviour can be observed if size of str1 isn't long enough to accomodate the additional characters of str2.

    strncat is the safer version of strcat.

    It appends the limited number of characters specified by the third argument passed to it.

    Note: strncat automatically adds NULL character at the end of the resultant string.

*/


#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];

    strcpy(str1, "Hello to");
    strcpy(str2, " All");

    strcat(str1, str2);
    printf("%s\n", str1);



    char str3[5], str4[100];
    
    strcpy(str3, "He");
    strcpy(str4, "llo!");
    strncat(str3, str4, sizeof(str3) - strlen(str3) - 1);

    printf("%s", str3);
    return 0;
}