#include <stdio.h>

int main()
{
    char var1 = -127;
    printf("%c\n", var1);

    char var2 = 129;
    printf("%c\n", var2);

    unsigned char var3 = 251;
    printf("%c", var3);

    return 0;
}


/*
 -> Size of character = 1 byte
 -> Signed character range = -128 to +127
 -> Unsigned character range = 0 to 255
 -> Negative values won't buy you any additional powers
*/