/*
    Union is a user defined data type but unlike structures, union members share same memory location.

    Example:

    struct abc {
        int a;
        char b;
    };

    a's address = 6295624
    b's address = 6295628



    union abc {
        int a;
        char b;
    };

    a's address = 6295616
    b's address = 6295616




    In union, members will share same memory location. If we make changes in one memeber then it will be reflected to other member as well.
*/


#include <stdio.h>
union abc {
    int a;
    char b;
}var;

union abc2{
    int a;
    char b;
    double c;
    float d;
};

int main(){

    var.a = 65;
    printf("a = %d\n", var.a);
    printf("b = %c\n", var.b);


    // Deciding the size of union

    printf("%ld\n", sizeof(union abc2));



    // Accessing members of union using pointers

    /*
        we can access members of union through pointers by using the arrow (->) operator.
    */

    var.a = 90;
    union abc *p = &var;

    printf("%d %c", p -> a, p -> b);

    return 0;
}





/*
    Consider the following C declaration

    struct {
        short s[5];
        union{
            float y;
            long z;
        } u;
    } t;

    Assume that objects of the type short, float and long occupy 2 bytes, 4 bytes and 8 bytes, respectively. The memory requirement for variable t, ignoring alignment considerations, is

    a) 22 bytes
    b) 14 bytes
    c) 18 bytes  correct answer
    d) 10 bytes

    short = 2 * 5 = 10 bytes
    long = 8 bytes

    total = 10 + 8 = 18 bytes

*/