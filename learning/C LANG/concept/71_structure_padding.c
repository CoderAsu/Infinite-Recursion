/*
    How memory is allocated to structure members?

    When an object of some structure type is declared then some contiguous block of memory will be allocated to structure members.

    For example:

    struct abc{
        char a; // 1 byte
        char b; // 1 byte
        int c;  // 4 bytes
    } var;

    What is the size of struct abc?

    calculating the size of the struct,
    let the size of int is 4 bytes and size of char is 1 byte.

    Processor doesn't read 1 byte at a time from memory.
    It reads 1 word at a time.

    If we have a 32 bit processor then it means it can access 4 bytes at a time which means word size is 4 bytes.

    If we have a 64 bit processor then it means it can access 8 bytes at a time which means word size is 8 bytes.

    In 1 CPU cycle, char a, char b and 2 bytes of int c can be accessed. There is no problem with char a and char b but whenever we want the value stored in variable c, 2 cycles are required to access the contents of variable c. In first cycle, 1st 2 bytes can be accessed and in 2nd cycle, last 2 bytes.


    _ _ _ _ | _ _ _ _ 

    Its an unnecessary wastage of CPU cycles.

    we can save the number of cycles by using the concept called padding.

    _ _ empty | _ _ _ _
*/


#include <stdio.h>

typedef struct abc1{
    char a;
    char c;
    int b;
} var1;

typedef struct abc2{
    char a;
    int b;
    char c;
} var2;

int main(){

    printf("%d\n", sizeof(var1));
    printf("%d", sizeof(var2));
    return 0;
}