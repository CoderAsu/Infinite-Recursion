#include <stdio.h>
int main(){
    printf("%c", '\n');
    // printf("%c", "\n"); error

    printf("----");

    putchar('\n');
    // putchar("\n"); error

    printf("----");
    
    // puts('\n'); error
    puts("\n");

    printf("----");

    // printf("%s", '\n'); error
    printf("%s", "\n");

    printf("---------");
    return 0;
}