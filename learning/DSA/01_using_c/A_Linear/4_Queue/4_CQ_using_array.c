#include <stdio.h>
#include <stdlib.h>

int *queue = NULL;
int size = 0;
int front = -1;
int rear = -1;

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
        printf("\n========== CIRCULAR QUEUE USING ARRAY ==========\n");
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


// Create Queue
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

    queue = malloc(size * sizeof(int));

    if (queue == NULL)
    {
        printf("Memory allocation failed!\n");
        size = 0;
        return;
    }

    front = -1;
    rear = -1;

    printf("Queue created successfully!\n");
}


// Display Queue
void display()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Circular Queue: ");

    int i = front;

    while (1)
    {
        printf("%d", queue[i]);

        if (i == rear)
        {
            break;
        }

        printf(" -> ");

        i = (i + 1) % size;
    }

    printf("\n");
}


// Enqueue
void enqueue()
{
    if (queue == NULL)
    {
        printf("Create the queue first!\n");
        return;
    }

    // Queue is full
    if ((rear + 1) % size == front)
    {
        printf("Queue is full!\n");
        return;
    }

    int value;

    printf("Enter element: ");
    scanf("%d", &value);

    // First element
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }

    queue[rear] = value;

    printf("%d inserted into queue.\n", value);
}


// Dequeue
void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("%d deleted from queue.\n", queue[front]);

    // Only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}


// Peek
void peek()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}


// Is Empty
void isEmpty()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is not empty.\n");
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

    if ((rear + 1) % size == front)
    {
        printf("Queue is full.\n");
    }
    else
    {
        printf("Queue is not full.\n");
    }
}


// Count Elements
void count()
{
    if (front == -1)
    {
        printf("Number of elements: 0\n");
        return;
    }

    int count = (rear - front + size) % size + 1;

    printf("Number of elements: %d\n", count);
}


// Search
void search()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    int value;
    int position = 1;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &value);

    int i = front;

    while (1)
    {
        if (queue[i] == value)
        {
            printf("%d found at position %d.\n",
                   value, position);

            found = 1;
            break;
        }

        if (i == rear)
        {
            break;
        }

        i = (i + 1) % size;
        position++;
    }

    if (!found)
    {
        printf("%d not found in queue.\n", value);
    }
}


// Front Element
void frontElement()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}


// Rear Element
void rearElement()
{
    if (rear == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Rear element: %d\n", queue[rear]);
}