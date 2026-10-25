// Precedence of Operators
/*
    Precedence of operators come into picture when in an expression we need to decide which operator will be evaluated first. Operator with higher precedence will be evaluated first.
*/



// Precedence and associativity table
/*


Operators                   Associativity
() [] -> . ++ --            Left to right
! ~ + - * & (type) sizeof   Right to left
* / %                       Left to right
+ -                         Left to right
<< >>                       Left to right
< <= > >=                   Left to right
== !=                       Left to right
& (Bitwise AND)             Left to right
^ (Bitwise XOR)             Left to right
| (Bitwise OR)              Left to right
&& (Logical AND)            Left to right
|| (Logical OR)             Left to right
?:                          Right to left
= += -= *= /= %= ...        Right to left
,                           Left to right


*/

// Precedence of Postfix Increment/Decrement operator is greater than Prefix Increment/Decrement



// Question
#include <stdio.h>
int main(){
    int a;
    a = fun1() + fun2();
    printf("%d", a);
    return 0;
}

int fun1(){
    printf("Hello");
    return 1;
}

int fun2(){
    printf("World");
    return 1;
}

// Which function is called first? fun1() or fun2() 

// It is not defined fun1() will be called first or whether fun2() will be called. Behavior is undefined and output is complier dependent.