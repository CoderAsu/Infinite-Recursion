// Sometimes, we need to convert a value from one type to another. This is called type casting. In C, there are two types of type casting: implicit and explicit.

#include <stdio.h>

int main() {
    int a = 10;
    double b = a; // implicit type casting
    printf("Value of b: %f\n", b);

    double c = 3.14;
    int d = (int)c; // explicit type casting
    printf("Value of d: %d\n", d);





    int maxScore = 500;
    int userScore = 425;

    float percentage = (float)userScore / maxScore * 100; // explicit type casting
    printf("User's percentage: %.2f%%\n", percentage);

    return 0;
}