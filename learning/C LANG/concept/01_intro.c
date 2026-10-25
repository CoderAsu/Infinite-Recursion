/*
    C programming language is the general-purpose, middle-level, procedural language developed in 1972 by Dennis Ritchie at Bell labratory.

    When you see #include, #define, #ifdef, etc., the # tells the compiler:
    👉 “Hey, this is a preprocessor instruction.

    In C, #include is a preprocessor directive that tells the compiler to insert the contents of another file into your program before actual compilation begins.

*/



// This is used for single line comment


/* 
    This is used for multi line comments.
*/

#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Hello World\n");
    // Here is some comments

    int value = 3;
    value = 6;

    int num1, num2, num3;
    num1 = 23;
    num2 = 45;
    num3 = 100;

    printf("%d\n", value);
    printf("%d\n", num1);
    printf("%d\n%d\n", num2, num3);

    int two = 2, three = 3, six = 6;
    int result = (two + three) * six / three;

    printf("I am new to programming but I know to write arithmetic expressions like this: (%d + %d) * %d / %d", two, three, six, three);

    printf(" and the result of the expression is %d\n", result);

    char userName[] = "Tom Holland";
    printf("%s plays the role of Spiderman", userName);

    return 0;
}


/*
    main() is the entry point of every C/C++ program.
    The int before main means the function returns an integer to the operating system when the program finishes.
    This return value is a status code that tells the OS whether the program ran successfully or not.




    Why return 0; inside main()?
    return 0; signals successful execution of the program.
    By convention:
    -> 0 = success
    -> Non-zero (like 1, -1, etc.) = error or abnormal termination


    If you omit return 0;, in modern C++ (and C99), the compiler implicitly adds it, but it's best practice to include it explicitly for clarity and portability.


*/


/*
    The difference between < > and " " in #include is mainly about where the compiler searches for the header file.

    | Syntax     | Typical purpose       | Search behavior |
    | `<header>` | Library/system header | System/include paths |
    | `"header"` | Your/project header   | Current/project location first, then include paths |

*/