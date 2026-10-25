#include <stdio.h>

#define STRING "%s\n"
#define Message "Welcome to C Lang"

int main()
{
    // question 1

    int var = 052;
    printf("%d\n", var);
    printf("%o\n", var);
    // Here 0 represent octal value


    // question 2

    printf(STRING, Message);



    return 0;
}