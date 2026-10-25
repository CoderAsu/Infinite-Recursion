#include <stdio.h>
#include <stdlib.h>

struct Heap {
    int *arr;
    int size;
    int capacity;
};

// Create a heap
struct Heap* createHeap(int capacity) {

    struct Heap *heap = malloc(sizeof(struct Heap));

    if (heap == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    heap->arr = malloc(capacity * sizeof(int));

    if (heap->arr == NULL) {
        printf("Memory allocation failed!\n");
        free(heap);
        return NULL;
    }

    heap->size = 0;
    heap->capacity = capacity;

    return heap;
}

// Check if heap is empty
int isEmpty(struct Heap *heap) {
    return heap->size == 0;
}

// Check if heap is full
int isFull(struct Heap *heap) {
    return heap->size == heap->capacity;
}

// Swap two values
void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

// Max Heapify
void maxHeapify(struct Heap *heap, int i) {

    int largest = i;

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check left child
    if (left < heap->size &&
        heap->arr[left] > heap->arr[largest]) {

        largest = left;
    }

    // Check right child
    if (right < heap->size &&
        heap->arr[right] > heap->arr[largest]) {

        largest = right;
    }

    // If largest is not the current node
    if (largest != i) {

        swap(&heap->arr[i], &heap->arr[largest]);

        maxHeapify(heap, largest);
    }
}

// Insert into Max Heap
void insert(struct Heap *heap, int value) {

    if (isFull(heap)) {

        int newCapacity = heap->capacity * 2;

        int *temp = realloc(
            heap->arr,
            newCapacity * sizeof(int)
        );

        if (temp == NULL) {
            printf("Memory reallocation failed!\n");
            return;
        }

        heap->arr = temp;
        heap->capacity = newCapacity;

        printf("Heap capacity increased to %d.\n",
               heap->capacity);
    }

    // Insert at the end
    int i = heap->size;

    heap->arr[i] = value;
    heap->size++;

    // Move value upward
    while (i > 0) {

        int parent = (i - 1) / 2;

        if (heap->arr[parent] < heap->arr[i]) {

            swap(&heap->arr[parent],
                 &heap->arr[i]);

            i = parent;
        }
        else {
            break;
        }
    }

    printf("%d inserted successfully!\n", value);
}

// Peek root
void peek(struct Heap *heap) {

    if (isEmpty(heap)) {
        printf("Heap is empty!\n");
        return;
    }

    printf("Maximum element: %d\n", heap->arr[0]);
}

// Delete root from Max Heap
void deleteRoot(struct Heap *heap) {

    if (isEmpty(heap)) {
        printf("Heap is empty!\n");
        return;
    }

    int deletedValue = heap->arr[0];

    // Move last element to root
    heap->arr[0] = heap->arr[heap->size - 1];

    heap->size--;

    // Restore heap property
    if (heap->size > 0) {
        maxHeapify(heap, 0);
    }

    printf("%d deleted successfully!\n", deletedValue);
}

// Display heap
void display(struct Heap *heap) {

    if (isEmpty(heap)) {
        printf("Heap is empty!\n");
        return;
    }

    printf("Heap elements: ");

    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }

    printf("\n");
}

// Build Max Heap
void buildMaxHeap(struct Heap *heap) {

    if (heap->size <= 1) {
        return;
    }

    // Start from last non-leaf node
    for (int i = heap->size / 2 - 1; i >= 0; i--) {

        maxHeapify(heap, i);
    }

    printf("Max Heap built successfully!\n");
}

// Heap Sort
void heapSort(struct Heap *heap) {

    if (heap->size <= 1) {
        printf("Not enough elements to sort.\n");
        return;
    }

    // Make sure it is a Max Heap
    buildMaxHeap(heap);

    int originalSize = heap->size;

    // Move largest element to the end
    for (int i = heap->size - 1; i > 0; i--) {

        swap(&heap->arr[0], &heap->arr[i]);

        // Reduce logical heap size
        heap->size = i;

        // Restore Max Heap
        maxHeapify(heap, 0);
    }

    // Restore size
    heap->size = originalSize;

    printf("Heap sorted successfully!\n");
}

// Free heap
void freeHeap(struct Heap *heap) {

    if (heap != NULL) {
        free(heap->arr);
        free(heap);
    }
}

// Main function
int main() {

    int capacity;

    printf("Enter initial heap capacity: ");
    scanf("%d", &capacity);

    if (capacity <= 0) {
        printf("Invalid capacity!\n");
        return 0;
    }

    struct Heap *heap = createHeap(capacity);

    if (heap == NULL) {
        return 0;
    }

    int choice;
    int value;

    while (1) {

        printf("\n========== MAX HEAP ==========\n");

        printf("1. Insert\n");
        printf("2. Delete Root\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Build Max Heap\n");
        printf("6. Heap Sort\n");
        printf("7. Check Empty\n");
        printf("8. Check Full\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:

                printf("Enter value: ");
                scanf("%d", &value);

                insert(heap, value);

                break;

            case 2:

                deleteRoot(heap);

                break;

            case 3:

                peek(heap);

                break;

            case 4:

                display(heap);

                break;

            case 5:

                buildMaxHeap(heap);

                break;

            case 6:

                heapSort(heap);

                break;

            case 7:

                if (isEmpty(heap)) {
                    printf("Heap is empty.\n");
                }
                else {
                    printf("Heap is not empty.\n");
                }

                break;

            case 8:

                if (isFull(heap)) {
                    printf("Heap is full.\n");
                }
                else {
                    printf("Heap is not full.\n");
                }

                break;

            case 9:

                freeHeap(heap);

                printf("Memory freed.\n");
                printf("Program ended.\n");

                return 0;

            default:

                printf("Invalid choice!\n");
        }
    }

    return 0;
}