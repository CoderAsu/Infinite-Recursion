/*
    Variable: A variable is a storage location in memory with a name where data can be stored.

    syntax of a variable:
    data_type variable_name;
*/


/*
    Variable Naming Conventions
    -> Start with a letter or an underscore.
    -> Use letters, numbers, dollar signs and underscores only.
    -> Variable names are case-sensitive.
    -> Avoid reserved keywords.
*/


/* 
    Variable Definition
    -> Means allocating memory to a variable.
    -> If not initialized, the variable contains a garbage value.
    -> Most modern C compilers declare and define variables in the single step.
*/



/*
    Variable Initialization
    -> Process of assigning an initial value to a variable.
    -> Initialize a variable during definition is a good practice.
*/

#include <stdio.h>
int main()
{
    int var1;
    printf("%d\n", var1);

    char var2;
    printf("%c\n", var2);

    float var3;
    printf("%f\n", var3);

    return 0;
}