#include <stdio.h>
#include <stdlib.h>
#include "array.h"

static int ensureCapactiy(){
    if(size < capacity){
        return 1;
    }

    int newCapacity = (capacity == 0) ? 1: capacity * 2;

    int *temp = realloc(arr, (size_t)newCapacity * sizeof(int));

    if(temp == NULL){
        printf("Memory allocation failed!\n");
        return 0;
    }

    arr = temp;
    capacity = newCapacity;

    return 1;
}


// Insert at the beginning

void insertAtBeginning(){
    if(arr == NULL){
        printf("Create the array first!\n");
        return;
    }

    int value;

    printf("Enter the value: ");
    if(scanf("%d", &value) != 1){
        printf("Invalid input!\n");
        return;
    }

    if(!ensureCapactiy()){
        return;
    }

    for(int i = size; i > 0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = value;
    size++;

    printf("Element inserted sucessfully!\n");
}



// Insert at the end

void insertAtEnd(){
    if(arr == NULL){
        printf("Create the array first!\n");
        return;
    }

    int value;

    printf("Enter the value: ");
    if(scanf("%d", &value) != 1){
        printf("Invalid input!\n");
        return;
    }

    if(!ensureCapactiy()){
        return;
    }

    arr[size] = value;
    size++;

    printf("Element inserted successfully!");
}




// Insert at a specific position

void insertAtPosition(){
    if(arr == NULL){
        printf("Create the array first!\n");
        return;
    }

    int pos, value;

    printf("Enter the position (1 to %d): ", size + 1);
    if(scanf("%d", &pos) != 1){
        printf("Invalid input!]\n");
        return;
    }

    if(pos < 1 || pos > size + 1){
        printf("Invalid position!\n");
        return;
    }

    printf("Enter the value: ");
    if(scanf("%d", &value) != 1){
        printf("Invalid input!\n");
        return;
    }

    for(int i = size; i >= pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;

    size++;

    printf("Element inserted sucessfully!\n");
}