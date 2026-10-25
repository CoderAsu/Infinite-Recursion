// scanf stands for Scan Formatted string
// Accept character, string, and numeric data from the user using standard input (keyboard)

// Scanf also use format specifiers like printf

// Don't forget to add "&" in front of variable name


/* 
While scanning the input, scanf needs to store that input data somewhere.

To store this input data, scanf needs to know the memory location of a variable. And here comes the ampersand to rescue.

& is also called as address-of operator.

&var = Address of var
*/


#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b , a + b);

    return 0;
}