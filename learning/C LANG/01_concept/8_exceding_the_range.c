#include <stdio.h>

int main()
{
    unsigned int var1 = 4294967297;

    printf("%u\n", var1);

    int var2 = 2147483648;
    printf("%d\n", var2);

    int var3 = -2147483649;
    printf("%d", var3);

    return 0;
}