/*
    Format specifiers are special codes used to display or receive different types of data.


    Type        Format Specifier
    int         %d and %i
    float       %f and %e
    char        %c
*/

#include <stdio.h>
int main(){

    // Character Format Specifier
    /*
        %c can be used as a format specifier to display and read a character.

        Characters are internally represented by ASCII values.

        Arithmetic operations are allowed on characters.
    */

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("You entered: %c\n", ch);




    // String Format Specifier
    /*
        A string is a sequence of characters.

        Terminated by a null character ('\0').

        Can be stored in an array.

        %s can be used as a format specifier to read and display a string.

        Reads non-whitespace characters and stops when it encounters a space, tab, or newline.

        Field width can be used to specify minimum or maximum number of characters to display or read respectively.
    */

    char str[100];
    printf("Enter a string: ");
    scanf("%4s", str);
    printf("You entered: %7s\n", str);







    // displaying integer
    int a = 123456;
    short b = 32767;
    long c = 2147484563;
    long long d = 8954774897589897;

    printf("%d\n", a);
    printf("%i\n", a);
    printf("%10d\n", a); // atleast 10 digits required
    printf("%010d\n", a);
    printf("%-10d\n", a);
    printf("%hd\n", b); // here h is for half memory  (short int)
    printf("%ld\n", c);
    printf("%lld\n", d);



    // accepting integer
    /*
        -> %wd or %wi can be used as a format specifier to accept an integer.

        -> Maximum field width controls the maximum number of digits to read.

        -> Whitespaces including tabs, newlines, and spaces are ignored.
    */

    int e, f;
    printf("Enter two integers: ");
    scanf("%2d %4d", &e, &f);
    printf("User input is %d and %d\n", e, f);





    // Octal Format Specifier
    /*
        Format specification for displaying and accepting an octal integer is %wo

        For scanf, the field width controls the maximum number of digits to read.

        For printf, the field width tells the minimum numbers of digits to display.

        The hash symbol in the octal format specifier is used to display the prefix 0.
    */

    int num;
    printf("Enter an octal number: ");
    scanf("%4o", &num);
    printf("Octal: %#o\n", num);





    // Hexadecimal Format Specifiers
    /*
        Format specification for displaying and accepting a hexadecimal integer is %wx or %wX.

        For scanf, the field width controls the maximum number of characters to read.

        For printf, the field width tells the minimum number of characters to display.

        The hash symbol in the hexadecimal format specifier is used to display the prefix 0x or 0X.
    */

    int hexnum;
    printf("Enter a hex number: ");
    scanf("%6x", &hexnum);
    printf("Hexadecimal: %#5x\n", hexnum);





    // Float Format Specifier
    /*
        %f is used to display or accept a number in standard decimal notation.

        %e is used to display a number in scientific notation.

        In case of printf, field width controls the minimum number of characters to display.

        Precision is valid only for print, not scanf.
    */

    float f1, f2;
    printf("Enter two real numbers: ");
    scanf("%11f %5f", &f1, &f2);
    printf("%10.4f %4.3e\n", f1, f2);

    return 0;
}