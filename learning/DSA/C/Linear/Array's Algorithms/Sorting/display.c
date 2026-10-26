#include <stdio.h>
#include "sorting.h"

void display(void){
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
}