#include <stdio.h>
#include "array.h"

void display(){
    if(arr == NULL){
        printf("Array does not exist!\n");
        return;
    }

    if(size == 0){
        printf("Array is empty!\n");
        return;
    }

    printf("Array Elements: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
}