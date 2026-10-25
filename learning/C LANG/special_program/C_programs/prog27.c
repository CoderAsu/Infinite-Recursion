/*
    Q27. WAP to read n values from the user and another such value from the user 
    and check if the such value present in the array.
*/

#include <stdio.h>

int main(){

    int n, i, search, found = 0;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d integer values: \n", n);

    for(i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++){

        if(numbers[i] == search){
            found = 1;
            break;
        }
    }

    if(found)
        printf("The value %d is present in the array.\n", search);
    else
        printf("The value %d is not present in the array.\n", search);

    return 0;
}

/*
    Output:

    Enter the number of elements (n): 5
    Enter 5 integer values: 
    12 34 72 5 18
    Enter the value to search: 18
    The value 18 is present in the array.
*/