#include <stdio.h>

int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, target, i;

    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements for the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result != -1){
        printf("The element found at index %d\n", result);
    } else {
        printf("Element not found!\n");
    }
    return 0;
}


