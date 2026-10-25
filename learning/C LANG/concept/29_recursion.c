/*
    Recursion is a process in which a function call itself directly or indirectly.

    For example 
    int fun()
    {
        ...
        fun();
    }

    Types of Recursion
    -> Direct recursion
    -> Indirect recursion
    -> Tail recursion
    -> Non-tail recursion


    // Advantage
    -> Every recursive program can be modeled into an iterative program but recursive programs are more elegant and requires relatively less lines of code.

    // Disadvantage
    -> Recursive programs require more space than iterative programs.
    
*/



#include <stdio.h>


int fun(int n)
{
    if(n == 1)
        return 1;
    else
        return 1 + fun(n - 1);
}

int main()
{
    int n = 4;
    printf("%d", fun(n));
    printf("\n");
    return 0;
}