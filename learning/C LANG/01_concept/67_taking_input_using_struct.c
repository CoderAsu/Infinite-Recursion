#include <stdio.h>

struct Student{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d",&n);
    
    struct Student s[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter Name, Roll, Marks for Students %d : ", i+1);
        scanf("%s %d %d", &s[i].name, &s[i].roll, &s[i].marks);
        // &s is optional for assigning string type 
    }
    for(int i=0;i<n;i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
        printf("\n");
    }
    printf("\n");
    return 0;
}