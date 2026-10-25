// Q7. Do an operation based on the input operator (+, - , *, /, %).

#include <stdio.h>

int main()
{
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %d\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %d\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %d\n", result);
        break;
    case '/':
        if (num2 != 0)
            printf("Result: %.2f\n", (float)num1 / num2);
        else
            printf("Error: Division by zero\n");
        break;
    case '%':
        if (num2 != 0)
            printf("Result: %d\n", num1 % num2);
        else
            printf("Error: Modulo by zero\n");
        break;
    default:
        printf("Invalid operator\n");
    }

    return 0;
}

/*
    Output:

    Enter an operator (+, -, *, /, %): *
    Enter two integers: 34 12
    Result: 408
*/