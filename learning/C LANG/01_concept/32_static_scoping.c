/*
    Scoping is necessary if you want to reuse variable names.

    
    Stack is a container (or memory segment) which holds some data.
    Data is retrieved in Last In First Out (LIFO) fashion.
    Two operations: push and pop.


    Activation Record is a portion of a stack which is generally composed of:
        -> Locals of the callee
        -> Return address to the caller
        -> Parameters of the callee



    What is static scoping?
    In static scoping (or lexing scoping), definition of a variable is resolved by searching its containing block or function. If that fails, then searching the outer containing block and so on.

    Example:

    int a = 10, b = 20;

    int fun(){

        int a = 5;

        {
            int c;
            c = b/a;
            printf("%d", c);
        }
    }

    Output: 4

*/

#include <stdio.h>


int a = 5;


int fun1(int b)
{
    b = b + 10;
    b = fun2(b);

    return b;
}

int fun2(int b)
{
    int c;
    c = a + b;

    return c;
}

int main()
{

    int a = 10;
    a = fun1(a);
    printf("%d", a);

    return 0;
}


