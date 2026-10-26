#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int *arr = NULL;
int size = 0;
int capacity = 0;

void create(){
    if(arr != NULL){
        printf("Array already exist! Destory it first.\n");
        return;
    }

    printf("Enter the size of the array: ");

    if(scanf("%d", &capacity) != 1){
        printf("Invalid input!\n");
        capacity = 0;
        return;
    }

    if(capacity <= 0){
        printf("Invalid size!\n");
        capacity = 0;
        return;
    }

    arr = malloc(capacity * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed!\n");
        capacity = 0;
        return;
    }

    size = capacity;

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        if(scanf("%d", &arr[i]) != 1){
            printf("Invalid input! Destroying the array.\n");
            free(arr);
            arr = NULL;
            size = 0;
            capacity = 0;
            return;
        }
    }

    printf("Array created sucessfully!\nn");
}