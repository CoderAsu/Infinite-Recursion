// for representing fractional numbers we use float, double and long double

/* 
Size of these data types totally depends from system to system

float -> 4 bytes = 32 bits
double -> 8 bytes = 64 bits
long double -> 12 bytes = 96 bits


1.2E-38 = 1.2 * 10^-38
3.4E+38 = 3.4 * 10^+38
*/


#include <stdio.h>

int main()
{
    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;


    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%.16f\n", var1);
    printf("%.16lf\n", var2);
    __mingw_printf("%.21Lf\n", var3);


    int var4 = 4/8;
    printf("%d\n", var4);

    float var5 = 4/9;
    printf("%.5f\n", var5);

    float var6 = 4.0/9.0;
    printf("%.5f\n", var6);

    float exponential = 1.2E-2;
    printf("%e", exponential);

    return 0;
}