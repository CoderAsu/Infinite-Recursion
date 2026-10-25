#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int temp[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;

    // Merge two sorted parts
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from left part
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from right part
    while (j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temp back to original array
    for (i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int temp[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergeSort(arr, temp, low, mid);
        mergeSort(arr, temp, mid + 1, high);

        merge(arr, temp, low, mid, high);
    }
}

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);


    int *arr = malloc(n * sizeof(int));
    int *temp = malloc(n * sizeof(int));


    if (arr == NULL || temp == NULL) {
        printf("Memory allocation failed!\n");

        free(arr);
        free(temp);

        return 1;
    }


    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    mergeSort(arr, temp, 0, n - 1);


    printf("Sorted array:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);
    free(temp);

    return 0;
}