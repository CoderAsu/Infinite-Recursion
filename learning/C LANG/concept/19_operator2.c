// Bitwise operators
/*
    & -> AND
    | -> OR
    ^ -> XOR
    ~ -> NOT
    << -> Left shift
    >> -> Right shift


    AND (&) Operator
    -> It takes two bits at a time and perform AND operation.

    -> AND(&) is binary operator. It takes two numbers and perform bitwise AND.

    -> Result of AND is 1 when both bits are 1.




    OR (|) Operator (Inclusive OR)
    -> It takes two bits at a time and perform OR operation.

    -> OR(|) is binary operator. It takes two numbers and perform bitwise OR.

    -> Result of OR is 0 when both bits are 0.






    XOR (^) Operator (Exclusive OR)
    -> Same as OR but when both A and B are 1 then output is 0.





    NOT (~) Operator
    -> NOT is a unary operator.

    -> Its job is to complement each bit one by one.

    -> Result of NOT is 0 when bit is 1 and 1 when bit is 0.







    Left shif (<<)

    First operand (whose bits get left shifted) << Second operand (decides the number of places to shift the bits)

    -> When bits are shifted left then trailing positions are filled with zeros.

    -> Left shifting is equivalent to multiplication by 2^(right operand)
    for example:
    var = 3;
    var << 1;

    output: [3 * 2^1] = 6









    Right shift (>>)

    First operand (whose bits get right shifted) >> Second operand (decides number of places to shift the bits)

    -> When bits are shifted right then leading positions are filled with zeros.

    -> Right shifting is equivalent to division by 2^(right operand)
    for example:
    var = 3;
    var << 1;

    output: [3 / 2^1] = 1

*/













// Conditional operator is the only ternary operator available in the list of operators in C language.

#include <stdio.h>

int main()
{
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0): 0) : 0;

    printf("%d", num);

    return 0;
}














// Comma operator
/*
    -> Comma operator can be used as a "separator".
    Example:
    int a = 3, b = 4, c = 8; (multiple definitions in single line)





    -> Comma operator can be used as an "operator".

    int a = (3, 4, 8);
    printf("%d", a);

    output: 8

    Comma operator returns the rightmost operand in the expression and it simply evaluates the rest of the operands and finally reject them.

    Example:

    int var = (printf("%s\n", "HELLO!"), 5);
    printf("%d", var);

    output: 
    Hello!
    5





    
    -> Comma operator is having least precedence among all the operators available in C language.

    Example1:
    
    int a;
    a = 3, 4, 8;

    printf("%d", a);

    Output: 3




    Example2:

    int a = 3, 4, 8;

    printf("%d", a);

    Output: error






    -> Comma operator acts like a separator within function calls and definitions, variable declarations and enum declarations.

    Example:

    int a;
    a = (3, 4, 8);

    printf("%d", a);

    Output: 8

    Bracket has the highest precedence than any other operator.
*/