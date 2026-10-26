#include <stdio.h>
#include "array.h"

// Delete from the beginning

void deleteAtBeginning(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }


    int deleted = arr[0];

    for(int i = 0; i < size - 1; i++){
        arr[i] = arr[i+1];
    }

    size--;

    printf("Deleted elemment: %d\n", deleted);
}



// Delete from the end

void deleteAtEnd(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int deleted = arr[size - 1];

    size--;

    printf("Deleted element: %d\n", deleted);
}




// Delete from a specific position

void deleteAtPosition(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int pos;

    printf("Enter the position (1 to %d): ", size);
    if(scanf("%d", &pos) != 1){
        printf("Invalid input!\n");
        return;
    }

    if(pos < 1 || pos > size){
        printf("Invalid position!\n");
        return;
    }

    int deleted = arr[pos - 1];

    for(int i = pos - 1; i < size - 1; i++){
        arr[i] = arr[i+1];
    }

    size--;

    printf("Delete element: %d\n", deleted);
}