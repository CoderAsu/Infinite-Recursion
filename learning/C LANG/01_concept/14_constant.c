// constant means once defined cannot be modified later in the code

/*
We can define constant by using:
-> #define
-> const
*/


/*
    -> don't add semicolon at the end
    -> choosing capital letters for Name is good practice
    -> we can use macros like functions
    -> we can use multiple lines using \
    -> first expansion then evaluation
    -> some predefined macros like __DATE__, __TIME__ can print current date and time
*/

#include <stdio.h>

// By using #define

#define PI 3.14159

#define add(a, b) a + b

#define greater(x, y) if(x > y) \
                        printf("%d is greater than %d\n", x, y); \
                    else \
                        printf("%d is lesser than %d\n", x, y);


int main()
{
    // int PI = 343.3434;  gives an error
    printf("%.5f\n", PI);

    printf("%d\n", add(4, 5));

    greater(5, 6);

    printf("result of expression a * b + c is: %d\n", 5 * add(2, 3));

    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);


    // By using const keyword

    const int var = 67;
    // var = 67;  gives an error
    printf("%d", var);

    return 0;
}

