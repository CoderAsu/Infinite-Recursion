#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    int priority;
} Queue;

Queue *queue = NULL;

int size = 0;
int countElements = 0;

// Function declarations
void create();
void display();
void enqueue();
void dequeue();
void peek();
void isEmpty();
void isFull();
void count();
void search();
void frontElement();
void rearElement();

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== PRIORITY QUEUE USING ARRAY ==========\n");
        printf("1. Create Queue\n");
        printf("2. Display Queue\n");
        printf("3. Enqueue\n");
        printf("4. Dequeue\n");
        printf("5. Peek\n");
        printf("6. Is Empty\n");
        printf("7. Is Full\n");
        printf("8. Count Elements\n");
        printf("9. Search\n");
        printf("10. Front Element\n");
        printf("11. Rear Element\n");
        printf("12. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            enqueue();
            break;

        case 4:
            dequeue();
            break;

        case 5:
            peek();
            break;

        case 6:
            isEmpty();
            break;

        case 7:
            isFull();
            break;

        case 8:
            count();
            break;

        case 9:
            search();
            break;

        case 10:
            frontElement();
            break;

        case 11:
            rearElement();
            break;

        case 12:
            free(queue);
            printf("Program exited.\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}


// Create Priority Queue
void create()
{
    printf("Enter queue size: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size!\n");
        size = 0;
        return;
    }

    queue = malloc(size * sizeof(Queue));

    if (queue == NULL)
    {
        printf("Memory allocation failed!\n");
        size = 0;
        return;
    }

    countElements = 0;

    printf("Priority queue created successfully!\n");
}


// Display
void display()
{
    if (countElements == 0)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    printf("\nData\tPriority\n");
    printf("----------------\n");

    for (int i = 0; i < countElements; i++)
    {
        printf("%d\t%d\n",
               queue[i].data,
               queue[i].priority);
    }
}


// Enqueue
void enqueue()
{
    if (queue == NULL)
    {
        printf("Create the queue first!\n");
        return;
    }

    if (countElements == size)
    {
        printf("Priority queue is full!\n");
        return;
    }

    int data;
    int priority;

    printf("Enter data: ");
    scanf("%d", &data);

    printf("Enter priority: ");
    scanf("%d", &priority);

    queue[countElements].data = data;
    queue[countElements].priority = priority;

    countElements++;

    printf("%d inserted with priority %d.\n",
           data, priority);
}


// Dequeue
void dequeue()
{
    if (countElements == 0)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    // Find highest priority
    // Smaller priority number = higher priority

    int highest = 0;

    for (int i = 1; i < countElements; i++)
    {
        if (queue[i].priority < queue[highest].priority)
        {
            highest = i;
        }
    }

    printf("%d deleted from priority queue.\n",
           queue[highest].data);

    // Shift elements to the left
    for (int i = highest; i < countElements - 1; i++)
    {
        queue[i] = queue[i + 1];
    }

    countElements--;
}


// Peek
void peek()
{
    if (countElements == 0)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    int highest = 0;

    for (int i = 1; i < countElements; i++)
    {
        if (queue[i].priority < queue[highest].priority)
        {
            highest = i;
        }
    }

    printf("Highest priority element: %d\n",
           queue[highest].data);

    printf("Priority: %d\n",
           queue[highest].priority);
}


// Is Empty
void isEmpty()
{
    if (countElements == 0)
    {
        printf("Priority queue is empty.\n");
    }
    else
    {
        printf("Priority queue is not empty.\n");
    }
}


// Is Full
void isFull()
{
    if (queue == NULL)
    {
        printf("Queue is not created.\n");
        return;
    }

    if (countElements == size)
    {
        printf("Priority queue is full.\n");
    }
    else
    {
        printf("Priority queue is not full.\n");
    }
}


// Count
void count()
{
    printf("Number of elements: %d\n",
           countElements);
}


// Search
void search()
{
    if (countElements == 0)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    int data;
    int found = 0;

    printf("Enter data to search: ");
    scanf("%d", &data);

    for (int i = 0; i < countElements; i++)
    {
        if (queue[i].data == data)
        {
            printf("%d found at position %d.\n",
                   data, i + 1);

            printf("Priority: %d\n",
                   queue[i].priority);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("%d not found.\n", data);
    }
}


// Front Element
void frontElement()
{
    if (countElements == 0)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    int highest = 0;

    for (int i = 1; i < countElements; i++)
    {
        if (queue[i].priority < queue[highest].priority)
        {
            highest = i;
        }
    }

    printf("Front element: %d\n",
           queue[highest].data);
}


// Rear Element
void rearElement()
{
    if (countElements == 0)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    printf("Rear element: %d\n",
           queue[countElements - 1].data);
}