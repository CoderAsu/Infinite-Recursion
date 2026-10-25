/*
    Function definition consists of block of code which is capable of performing some specific task.

    for example:
    
    int add(int a, int b){
        int sum;
        sum = a + b;
        return sum;
    }


    Diff Bet Parameter and Argument:

    Parameter (formal parameter): It is a variable in the declaration and definition of the function.
    Argument (actual parameter): It is the actual value of the parameter that gets passed to the function.
*/

#include <stdio.h>

int add(int, int);

void display(const int);

int main(){
    int m = 4, n = 5, sum;
    sum = add(m, n);
    printf("Sum is %d", sum);

    printf("\n");

    int num = 6;

    display(num);

    printf("\n");
    return 0;
}

int add(int a, int b){
    return a + b;
}

// const parameter
void display(const int x){
    printf("%d", x);
}