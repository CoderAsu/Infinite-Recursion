/*
    Array of Structure

    Instead of declaring multiple variables, we can also declare an array of structure in which each element of the array will represent a structure varaible.
*/

#include <stdio.h>

struct Students{
    int roll;
    float marks;
};


int main()
{
    struct Students s[3];

    s[0].roll = 202568081;
    s[0].marks = 9.9;

    s[1].roll = 202560108;
    s[1].marks = 9.9;

    s[2].roll = 202568074;
    s[2].marks = 10.0;

    for(int i = 0; i<3; i++){
        printf("%d %.2f \n", s[i].roll, s[i].marks);
    }


    return 0;

}