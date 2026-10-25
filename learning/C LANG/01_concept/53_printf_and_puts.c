/*
Writing String using printf and puts

char *ptr = "Hello World";
printf("%s", ptr);

Output: Hello World

"%.ns" is used to print just a part of the string where n is the number of characters to be displayed on the screen.

char *ptr = "Hello World";
printf("%.5s", ptr);

"%m.ns" is used to print just a part of the string where n is the number of characters to be displayed and m denotes the size of the field within which the string will be displayed.

char *ptr = "Hello World!";

printf("%.5s", ptr);
printf("%.6.5s", ptr);

Output:
Hello
 Hello

*/



/*
Writing string using puts

puts() function is a function declared in <stdio.h> library and is used to write strings to the output screen. 

Also puts() function automatically writes a newline character after writing the string to the output screen.

char *s = "Hello";
puts(s);
puts(s);

Output:
Hello
Hello

*/


#include <stdio.h>
int main(){
    char *ptr = "Hello World";
    printf("%s\n", ptr);

    printf("%.5s\n", ptr);

    printf("%7.5s\n", ptr);

    puts(ptr);
    puts(ptr);
    return 0;
}