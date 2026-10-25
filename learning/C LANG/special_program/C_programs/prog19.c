/*
    Q19. WAP to read 5 float values and print the sum of whole number and 
    sum of the fractional number separately.
*/ 

#include <stdio.h>

int main() {
    int count = 0;
    float num;
    int wholeSum = 0;
    float fracSum = 0.0;

    while (count < 5) {
        printf("Enter float number %d: ", count + 1);
        scanf("%f", &num);

        int wholePart = (int)num;           
        float fracPart = num - wholePart;   

        wholeSum += wholePart;
        fracSum += fracPart;

        count++;
    }

    printf("\nSum of whole parts: %d\n", wholeSum);
    printf("Sum of fractional parts: %.5f\n", fracSum);

    return 0;
}

/*
    Output:

    Enter float number 1: 45.89
    Enter float number 2: 3434.232
    Enter float number 3: 45534.33333
    Enter float number 4: 756.447
    Enter float number 5: 2.9999

    Sum of whole parts: 49771
    Sum of fractional parts: 2.90089
*/