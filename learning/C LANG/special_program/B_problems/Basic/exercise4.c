#include <stdio.h>

int main(){

    // Question 1
    int var1;
    int num;

    num = (var1 = 15, var1 + 35);
    printf("%d\n", num);



    // Question 2
    int i = 5;
    int var2 = sizeof(i++);

    printf("%d %d\n", i, var2);





    // Question 3

    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;

    printf("%d %d %d %d\n", d, c, b, a);




    // Question

    unsigned int var = 10;
    printf("%d", ~var);
    return 0;
}