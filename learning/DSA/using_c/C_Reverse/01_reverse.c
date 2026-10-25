#include <stdio.h>

void reverse(int arr[], int size){
    int start = 0; 
    int end = size - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main(){
    int i, n;

    printf("Enter the elements of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);

    printf("Array after reverse: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}