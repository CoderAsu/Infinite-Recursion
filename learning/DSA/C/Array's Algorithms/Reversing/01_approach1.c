#include <stdio.h>
#include <stdlib.h>

void reverse1(int arr[], int n){
    int low = 0, high = n - 1, temp;

    while(low <= high){
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
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


    reverse1(arr, size);

    printf("Sorted Array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

    printf("\n";)
    return 0;
}