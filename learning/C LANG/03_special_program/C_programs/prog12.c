// Q12. WAP to print the grade value using switch case.

#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade); 

    switch(grade) {
        case 'A': printf("Excellent!\n"); break;
        case 'B': printf("Very Good\n"); break;
        case 'C': printf("Good\n"); break;
        case 'D': printf("Needs Improvement\n"); break;
        case 'F': printf("Fail\n"); break;
        default:  printf("Invalid grade entered.\n");
    }

    return 0;
}

/*
    Output:

    Enter your grade (A, B, C, D, F): A
    Excellent!
*/