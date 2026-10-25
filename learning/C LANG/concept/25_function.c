/*
Function is basically a set of statements that takes inputs, perform some computation and produces output.

syntax:

    return_type function_name(set_of_inputs);



There are two important reasons of why we are using functions:
1. Once the function is defined, it can be reused over and over again.
2. If you are just using the function in your program then you don't have to worry about how it works inside!
*/


#include <stdio.h>

int areaOfRect(int length, int breadth){
    int area;
    area = length * breadth;
    return area;
}

int main(){
    int l = 10, b = 5;
    int area =areaOfRect(l, b);
    printf ("%d", area);
    return 0;
}