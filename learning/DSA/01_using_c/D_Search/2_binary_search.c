#include <stdio.h>

int binarySearch(int arr[], int n, int target){
    int low = 0, high = n - 1, mid;

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == target){
            return mid;
        } else if (arr[mid] < target){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){
    int i, n, target, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    result = binarySearch(arr, n, target);

    if(result != -1){
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found!\n");
    }
    return 0;
}