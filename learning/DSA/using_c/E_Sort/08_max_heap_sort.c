#include <stdio.h>
#include <stdlib.h>

// Swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify down for Max Heap
void maxHeapify(int arr[], int size, int i)
{
    int largest = i;

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check left child
    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }

    // Check right child
    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }

    // If largest is not the current node
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);

        maxHeapify(arr, size, largest);
    }
}

// Build Max Heap
void buildMaxHeap(int arr[], int size)
{
    // Start from the last non-leaf node
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        maxHeapify(arr, size, i);
    }
}

// Max Heap Sort
void maxHeapSort(int arr[], int size)
{
    // Step 1: Build Max Heap
    buildMaxHeap(arr, size);

    // Step 2: Move maximum elements to the end
    for (int i = size - 1; i > 0; i--)
    {
        // Move maximum element to the end
        swap(&arr[0], &arr[i]);

        // Restore Max Heap
        maxHeapify(arr, i, 0);
    }
}

// Display array
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size!\n");
        return 0;
    }

    // Dynamic memory allocation
    int *arr = malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }

    // Take input
    printf("Enter %d elements:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting: ");
    display(arr, size);

    // Max Heap Sort
    maxHeapSort(arr, size);

    printf("After Max Heap Sort: ");
    display(arr, size);

    // Free dynamically allocated memory
    free(arr);
    arr = NULL;

    return 0;
}