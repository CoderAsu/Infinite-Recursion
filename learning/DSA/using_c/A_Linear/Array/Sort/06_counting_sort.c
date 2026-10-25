#include <stdio.h>

void countingSort(int arr[], int n){
    int i, max = arr[0], temp[n];

    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int count[max + 1];

    for(i = 0; i <= max; i++){
        count[i] = 0;
    }

    for(i = 0; i < n; i++){
        ++count[arr[i]];
    }

    for(i = 1; i <= max; i++){
        count[i] = count[i] + count[i-1];
    }

    for(i = n - 1; i >= 0; i--){
        temp[--count[arr[i]]] = arr[i];
    }

    for(i = 0; i < n; i++){
        arr[i] = temp[i];
    }
}

int main(){

    int i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);

    printf("Sorted Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}