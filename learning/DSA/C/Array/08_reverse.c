#include <stdio.h>
#include "array.h"

void reverse(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int start = 0, end = size - 1, temp;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Array reversed sucessfully!\n");
}