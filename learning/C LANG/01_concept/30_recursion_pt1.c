/*
    Direct recursion:
    A function is called direct recursive if it calls the same function again.

    Structure of Direct recursion:

    fun() {

        // some code

        fun();

        // some code
    }


    Indirect recursion:
    A function (let say fun1) is called indirect recursive if it calls another function (let say fun2) and then fun2 calls fun1 directly or indirectly.

    Structure of Direct recursion:

    fun1() {
        // some code

        fun2();

        // some code
    }

    fun2() {
        // some code

        fun1();
        
        // some code
    }
*/


// Indirect Recursion

#include <stdio.h>

void odd();
void even();

int n = 1;

void odd()
{
    if(n <= 10){
        printf("%d ", n + 1);
        n++;
        
        even();
    }
    return;
}

void even()
{
    if(n <= 10){
        printf("%d ", n - 1);
        n++;
        
        odd();
    }
    return;
}

int main(){
    odd();
    printf("\n");
    return 0;
}