#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){
    int target, size;

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

    printf("Enter value to search: ");
    if(scanf("%d", &target) != 1){
        printf("Invalid input!\n");
        return 1;
    }

    int result = linearSearch(arr, size, target);

    if(result != -1){
        printf("Element found at position %d\n", result + 1);
    } else {
        printf("Element not found!\n");
    }

    free(arr);
    arr = NULL;

    return 0;
}