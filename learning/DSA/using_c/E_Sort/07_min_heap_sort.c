#include <stdio.h>
#include <stdlib.h>

// Swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify down for Min Heap
void minHeapify(int arr[], int size, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check left child
    if (left < size && arr[left] < arr[smallest])
    {
        smallest = left;
    }

    // Check right child
    if (right < size && arr[right] < arr[smallest])
    {
        smallest = right;
    }

    // If smallest is not the current node
    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);

        minHeapify(arr, size, smallest);
    }
}

// Build Min Heap
void buildMinHeap(int arr[], int size)
{
    // Start from the last non-leaf node
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        minHeapify(arr, size, i);
    }
}

// Min Heap Sort
void minHeapSort(int arr[], int size)
{
    // Step 1: Build Min Heap
    buildMinHeap(arr, size);

    // Step 2: Remove minimum one by one
    for (int i = size - 1; i > 0; i--)
    {
        // Move minimum element to the end
        swap(&arr[0], &arr[i]);

        // Restore Min Heap
        minHeapify(arr, i, 0);
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

    // Min Heap Sort
    minHeapSort(arr, size);

    printf("After Min Heap Sort: ");
    display(arr, size);

    // Free memory
    free(arr);
    arr = NULL;

    return 0;
}