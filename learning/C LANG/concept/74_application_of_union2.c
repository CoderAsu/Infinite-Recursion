#include <stdio.h>

typedef union{
    int a;
    char b;
    double c;
} data;

int main(){
    data arr[10];
    arr[0].a = 10;
    arr[1].b = 'a';
    arr[2].c = 10.178;

    // successful in creating an array containing mixed type data.
    
    return 0;
}