#include <stdio.h>

int main(){

    int x = 10;

    int *p1 = &x;
    printf("%d\n", *p1);

    int **p2 = &p1;
    printf("%d\n", **p2);

    int ***p3 = &p2;
    printf("%d\n", ***p3);

    printf("%d\n", x);

    return 0;
}