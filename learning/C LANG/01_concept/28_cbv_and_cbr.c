/*
    Call by Value: Here values of actual parameters will be copied to formal parameters and these two different parameters store values in different locations.

    Call by reference: Here both actual and formal parameters refers to the same memory location. Therefore, any changes made to the formal parameters will get reflected to actual parameters.
*/

#include <stdio.h>


void fun1(int, int);

void fun2();

int main(){
    int a = 4, b = 5, c = 6;

    fun1(a, b);
    printf("%d", c-a-b);

    int d = 10, e = 20;

    fun2(&d, &e);
    printf("%d %d", d, e);

    return 0;
}

void fun1(int a, int b){
    int c;
    c = a; a = b; b = c; 

}

void fun2(int *a, int *b){
    int *c;
    c = a; *a = *b; *b = *c;
}