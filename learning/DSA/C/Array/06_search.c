#include <stdio.h>
#include "array.h"

void search(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int value;
    int found = 0;

    printf("Enter the element to search: ");
    if(scanf("%d", &value) != 1){
        printf("Invalid input!\n");
        return;
    }

    for(int i = 0; i < size; i++){
        if(arr[i] == value){
            printf("%d found at position %d\n", value, i + 1);
            found = 1;
        }
    }

    if(!found){
        printf("Element not found!\n");
    }
}