#include <stdio.h>
#include "sorting.h"

void merge(int arr[], int temp[], int low, int mid, int high){
    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i];
    }
    
}

void mergeSort(int arr[], int temp[], int low, int high){
    if(low < high){
        int mid = (low + high)/2;

        mergeSort(arr, temp, low, mid);
        mergeSort(arr, temp, mid + 1, high);

        merge(arr, temp, low, mid, high);
    }
}
