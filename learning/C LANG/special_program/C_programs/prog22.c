/*
    Q22. WAP to read n number of values from the user and find the average 
    using do-while loop.
*/ 

#include <stdio.h>
int main(){
    
    int num, sum = 0, count = 0;
    float avg;

    do{
        printf(" Enter a value: ");
        scanf("%d", &num);

        if(num != -1){

            sum = sum + num;
            count++;
        } 

    } while(num != -1);

    avg = sum / (count * 1.0);
    
    printf("Average = %f", avg);

    return 0;
}

/*
    Output:

    Enter a value: 56
    Enter a value: 453
    Enter a value: 33 
    Enter a value: 97
    Enter a value: 234
    Enter a value: -1
    Average = 174.600006
*/