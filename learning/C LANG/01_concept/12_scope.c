// global variables by default initializes to 0.
// local variables by default initializes to random values.

/*
    int var; -> declaration and definition
    extern int var; -> declaration

    multiple declaration are allowed but multiple definition are not allowed.
*/


#include <stdio.h>

int mainVar;


int main(){

    printf("%d\n", mainVar);

    printf("%d\n", x);

    int var1 = 3;
    
    {
        int var1 = 4;
        printf("%d\n", var1);
    }

    printf("%d\n", var1);

    int var3;
    printf("%d\n", var3);

    

    return 0;
}

