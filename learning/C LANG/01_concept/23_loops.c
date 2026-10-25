// There are three types of loop which can be used in programming.
/*
    1. for loop
    2. while loop
    3. do-while loop
*/


/*
    for(initialization, condition, increment/decrement){
        statements;
    }


    while(condition){
        Statements;
        increment/decrement;
    }


    do{
        Statements;
        increment/decrement;
    }while(condition);
*/

#include <stdio.h>
int main(){

    // simple for loop
    int i;
    for(i = 1; i <= 5; i++){
        printf("Number: %d\n", i);
    }


    // Multiple variables in for loop

    int a, b;
    for(a = 1, b = 10; a <= 5 && b >= 6; a++, b--){
        printf("a: %d, b: %d\n", a, b);
    }


    // while loop
    int j = 1;
    while (j < 3)
    {
        printf("Value: %d\n", j);
        j++;
    }



    // do-while loop
    int k = 1;
    do
    {
        printf("Answer: %d\n", k);
        k++;
    } while (k < 11);
    
    
    return 0;
}