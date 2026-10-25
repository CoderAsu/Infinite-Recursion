/*
Reading string using scanf

Using scanf(), we can read a string into a string variable (character array)

char a[10];
printf("Enter the string: \n");
scanf("%s", a);
printf("%s", a);

Like any array name, a is treated as a pointer to the first element of the array. Therefore, there is no need to put &.

Input: You are most welcome
Output: You

Why only "You" is stored ?
scanf() doesn't store the white space characters in the string variable. It only reads characters other than white spaces and store them in the specified character array until it encounters a white-space character.



Reading String using gets()

In order to read an entire line of input, get() function can be used.

char a[10];
printf("Enter the string: \n");
gets(a);
printf("%s", a);

Input: You are most welcome
Your program may crashed

Both, gets() and scanf() functions have no way to detect when the character array is full.

Both of them never checks the maximum limit of input characters. Hence, they may cause undefined behaviour and probably lead to buffer overflow error which eventually causes the program to crash.

Although, scanf() has the way to set the limit fro the number of characters to be stored in the character array.

By using %ns, where n indicates the number of characters allowed to store in the character array.

char a[10];
printf("Enter the string: \n");
scanf("%9s", a);
printf("%s", a);

Input: Youaremostwelcome
Output: Youaremos

But, unfortunately, gets() is still unsafe. 
Hence, it is advisable to not use the gets() function.
*/

/*
    gets() = dangerous, removed

    instead of using gets() use fgets()
    
    fgets() = safe, recommended for reading strings with space
*/

/*
    fgets()
    Reads a full line of input safely, including spaces.

    why safe?
    -> You specify the maximum number of characters.
    -> Prevents overflow.
    -> Recommended by modern C standards.

    syntax:
    fgets(str, sizeof(str), stdin)
*/


#include <stdio.h>
int main(){
    char a[20];

    printf("Enter the string: \n");
    fgets(a, sizeof(a), stdin);
    printf("You entered: %s\n", a);

    return 0;
}


