#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int *arr = NULL;
int size = 0;
int *temp = NULL;

void create(void){
    if(arr != NULL){
        printf("Array already exist! Destory it first.\n");
        return;
    }

    printf("Enter the size of the array: ");

    if(scanf("%d", &size) != 1){
        printf("Invalid size!\n");
        size = 0;
        return;
    }


    if(size <= 0){
        printf("Size must be greater than zero!\n");
        size = 0;
        return;
    }

    arr = malloc((size_t)size * sizeof(int));
    temp = malloc((size_t)size * sizeof(int));

    if(arr == NULL || temp == NULL){
        printf("Memory allocation failed!\n");
        free(arr);
        free(temp);
        arr = NULL;
        temp = NULL;
        size = 0;
        return;
    }

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        if(scanf("%d", &arr[i]) != 1){
            printf("Invalid input! Destroying the array.\n");
            free(arr);
            free(temp);
            arr = NULL;
            temp = NULL;
            size = 0;
            return;
        }
    }

    printf("Array created successfully!\n");
}