#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;
    int temp;

    while (i <= j)
    {
        while (i <= end && arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Put pivot in its correct position
    temp = arr[start];
    arr[start] = arr[j];
    arr[j] = temp;

    return j;
}

void quicksort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(arr, start, end);

        quicksort(arr, start, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, end);
    }
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory Allocation Failed!");
        free(arr);
        return 1;
    }

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}