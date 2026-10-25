#include <stdio.h>

extern int a;
extern int a;
extern int a;

extern int out_var;

int b = 100;

int main()
{
    printf("%d\n", a);

    extern int b;
    printf("%d\n", b);

    printf("%d", out_var);
    return 0;
}