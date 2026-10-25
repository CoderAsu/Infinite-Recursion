// Fibonacci series

#include <stdio.h>

int main(){
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++){

        if(i <= 1)
            next = i;
        else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}


/*
    Output:
    
    Enter the number of terms: 10
    Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 
*/