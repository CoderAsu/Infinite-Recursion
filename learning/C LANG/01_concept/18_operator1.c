/*
Types of operators in C:
1. Arithmetic operators -> +, -, *, /, %
2. Increment/Decrement operators -> ++, --
3. Relational operators -> ==, !=, <=, >=, <, >
4. Logical operators -> &&, ||, !
5. Bitwise operators -> &, ^, |, ~, >>, <<
6. Assignment operators -> =, *=, /=, ...
7. Other operators -> ?:, &, *, sizeof(), ',', '.', '->'

*/

// Arithmetic Operators
/*
    precedence and associativity

    1st (*, /, %)  -> left to right

    2nd (+, -)  -> left to right

*/

// Increment/Decrement Operators
/*
    -> Increment operator is used to increment the value of a variable by one. Similarly, decrement operator is used to decrement the value of a variable by one.

    -> Both are unary operators because they are applied on single operand.

    Pre-increment operator = ++a
    Post-increment operator = a++
    Pre-decrement operator = --a
    Post-decrement operator = a--

    -> You cannot use rvalue before or after increment/decrement operator.
    ex: (a + b)++ error!
        ++(a + b) error!

*/

#include <stdio.h>
int main()
{
    int num = 5;
    int a = ++num;
    printf("%d\n", a);

    int b = num++;
    printf("%d\n", b);

    int c = ++a + b;
    printf("%d\n", c);

    int d = a++ + b;
    printf("%d\n", d);

    printf("%d\n", num);

    // (a+b)++;  
    
    /*
    compiler is expecting a variable as an increment operand but we are providing an expression (a+b) which does not have the capability to store data.
    */

    return 0;
}

// Relational Operators
// All relational operators will return either True or False.

/*
    4 == 5 is equivalent to is 4 == 5?
    Ans: False

    4 != 5 is equivalent to 4 != 5?
    Ans: True
*/

// Logical Operators
/*
    && -> returns TRUE when all the conditions under consideration are true and returns FALSE when any one or more than one condition is false.

    for example:
    int a = 5;

    if (a != 5 && a != 6 && a <= 56 && a > 4)
    {
        printf("Welcome to this beautiful world of operators");
    }





    || -> returns TRUE when one or more than one condition under consideration is true and returns FALSE when all conditions are false.

    for example:
    int a = 5;

    if(a != 5 || a == 6 || a >= 56 || a > 4)
    {
        printf("Welcome to this beautiful world of operators")
    }






    ! -> returns TRUE when condition is FALSE and returns FALSE when condition is TRUE.

    for example:
    int a = 5;

    if (!(a != 5))
    {
        printf("Welcome to this beautiful world of operators")
    }











    Short circuit in case of && simply means if there is a condition anywhere in the expression that returns false, then the rest of the conditions after that will not be evaluated.

    #include <stdio.h>

    int main(){
        int a = 5, b = 3;
        int incr;

        incr = (a > b) && (b++);
        printf("%d\n", incr);
        printf("%d", b);

        return 0;

        result:
        1
        4
    }








    Short circuit in case of || simply means if there is a condition anywhere in the expression that returns True, then the rest of the conditions after that will not be evaluated.

    #include <stdio.h>

    int main(){
        int a = 5, b = 3;
        int incr;

        incr = (a > b) || (b++);
        printf("%d\n", incr);
        printf("%d", b);

        return 0;

        result:
        1
        3
    }
*/