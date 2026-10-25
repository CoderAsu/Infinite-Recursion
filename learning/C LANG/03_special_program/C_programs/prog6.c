// Q6. WAP to read 5 marks of a student and display the total, average and grade.

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    float avg;
    char grade;

    printf("Enter mark for DSUC: ");
    scanf("%d", &m1);

    printf("Enter mark for DBMS: ");
    scanf("%d", &m2);

    printf("Enter mark for COA: ");
    scanf("%d", &m3);

    printf("Enter mark for Math: ");
    scanf("%d", &m4);

    printf("Enter mark for English: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    avg = total / 5;

    if(avg >= 90) grade = 'A';

    else if(avg >= 80) grade = 'B';

    else if(avg >= 70) grade = 'C';

    else if(avg >= 60) grade = 'D';

    else if(avg >= 50) grade = 'E';

    else grade = 'F';


    printf("\nTotal Marks = %d\n", total);
    printf("Average = %.2f\n", avg);
    printf("Grade = %c\n", grade);

    return 0;
    
}

/*
    Output:

    Enter mark for DSUC: 94
    Enter mark for DBMS: 91
    Enter mark for COA: 89
    Enter mark for Math: 84
    Enter mark for English: 92

    Total Marks = 450
    Average = 90.00
    Grade = A
*/