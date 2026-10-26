#include <stdio.h>
#include <stdlib.h>

void reverse2(int arr[], int size){
    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main(){
    int size;

    printf("Enter the size of the array: ");
    if(scanf("%d", &size) != 1){
        printf("Invalid size!\n");
        return 1;
    }

    int *arr = malloc(size * sizeof(int));

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        if(scanf("%d", &arr[i]) != 1){
            printf("Invalid input!\n");
            return 1;
        }
    }


    reverse2(arr, size);

    printf("Sorted Array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

    printf("\n");
    return 0;
}