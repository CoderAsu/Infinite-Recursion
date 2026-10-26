#include <stdio.h>
#include "array.h"

void sort(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array sorted sucessfully!\n");
}