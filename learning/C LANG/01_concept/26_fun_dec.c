/*
    Function declaration (also called function prototype) means declaring the properties of a function to the compiler.

    For example: int fun(int a, char b);

    It is not necessary to put the name of the parameters in function prototype.


    Is it always necessary to declare the function before using it ?
    Not necessary but it is preferred to declare the function before using it.
*/

#include <stdio.h>
char fun();

int main(){
    char c = fun();
    printf("character is %c", c);
    return 0;
}

char fun(){
    return 'a';
}