#include <stdio.h>
#include "sorting.h"

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    int temp;

    while(i < j){
        while(i <= high && arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}