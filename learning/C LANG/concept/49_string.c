// String Literal (or String Constant) is a sequence of characters encoded in double quotes.

// %s is a place holder for string in printf and scanf functions.

#include <stdio.h>
int main(){

    char str1[] = "Hello, World!";
    char str2[] = "C Programming";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);


    printf("%s", "You have to dream before your dreams can come true. \
- A. P. J. Abdul Kalam\n"); // This is called slice string literal.

    //or

    printf("%s", "Success is not final, failure is not fatal. " 
    "- Winston S. Churchill\n");
    printf("\n");




    // Why is '\0' Important?
    char animeChar[] = {'J', 'i', 'n', 'w', 'o', 'o', '\0'};
    printf("%s", animeChar);
    return 0;

    // without '\0' the array act as character array not string array
}





// printf("Earth");

// "Earth" is a string literal.

// First argument of printf and scanf is always a string literal.

/*




String literals are stored as an array of characters.

Total 6 bytes of read-only memory will be allocated for the string literal "Earth".

E   a   r   t   h  \0
|   |   |   |   |   |
0   1   2   3   4   5

The last character '\0' is called null character which indicates the end of the string.

'\0' character is automatically added at the end of every string literal by the compiler.

'\0' character must not be confused with '0' (zero) character.

Both have different ASCII values. '\0' has ASCII value 0 whereas '0' has ASCII value 48.

*/



/*

But, what we are actually passing to the printf/scanf functions are the addresses of the first characters of those string literals.


In C, the name of an array acts as a pointer to the first element of the array.
So, when we pass a string literal to printf/scanf, we are actually passing the address of the first character of that string literal.

Both printf and scanf functions expect a character pointer (char *) as their first argument.

When we pass a string literal to these functions, the compiler automatically converts the string literal to a character pointer pointing to the first character of the string literal.


for example, when we write:
printf("Earth");
The compiler converts it to:
printf((char *)"Earth");


*/