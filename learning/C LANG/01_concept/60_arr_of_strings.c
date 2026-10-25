// an array of strings means storing multiple strings in one variable. Since C doesn't have a built-in string type, we use character arrays.


#include <stdio.h>

int main() {

    char *names[3] = {
        "Subham",
        "Rahul",
        "Aman"
    };

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);
    printf("\n");


    // or

    printf("%s\n", *names);
    printf("%s\n", *(names+1));
    printf("%s\n", *(names+2));
    printf("%c\n", **names);
    printf("\n");


    // or

    char names2[3][20] = {
        "Subham",
        "Rahul",
        "Aman"
    };

    printf("%s\n", names2[0]);
    printf("%s\n", names2[1]);
    printf("%s\n", names2[2]);

    return 0;
}