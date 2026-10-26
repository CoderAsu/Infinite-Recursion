#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int target){
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        int mid = (low + high)/2;

        if(arr[mid] == target){
            return mid;
        } else if (arr[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
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

    printf("Enter %d elements in sorted order: ", size);
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

    int result = binarySearch(arr, size, target);

    if(result != -1){
        printf("Element found at position %d\n", result + 1);
    } else {
        printf("Element not found!\n");
    }

    free(arr);
    arr = NULL;

    return 0;
}