#include <stdio.h>

struct Ournode{
    char x, y, z;
};

int main(){
    struct Ournode p = {'1', '0', 'c'};
    struct Ournode *q = &p; // here the pointer q point the whole structure not the first element of the structure

    printf("%c, %c", *((char*)q+1), *((char*)q+2));
    // here *((char*)q) refers to first element of the structure.
    
    return 0;
}