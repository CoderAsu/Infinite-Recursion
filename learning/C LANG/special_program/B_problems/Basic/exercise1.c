#include <stdio.h>

int main()
{
    // question 1
    printf("%d\n", printf("%s", "Hello World"));


    // question 2
    printf("%s\n", "Hello");
    printf("%10s\n", "Hello");


    // question 3
    char c = 255;
    c = c + 10;
    printf("%d\n",c);

    
    // question 4
    signed int var1 = 1;
    signed var2 = 2;
    unsigned var3 = 3;
    long var4 = 4;
    long int var5 = 34343;
    long long var6 = 77654634;

    printf("%d, %d, %d, %d, %d, %d\n", var1, var2, var3, var4, var5, var6);



    //  question 5
    unsigned i = 1;
    int j = -4;
    printf("%u", i + j);
    return 0;
}