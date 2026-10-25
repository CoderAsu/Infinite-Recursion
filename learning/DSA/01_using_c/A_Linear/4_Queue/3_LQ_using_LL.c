#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
} node;

node *front = NULL;
node *rear = NULL;

// Function declarations
void create();
void display();
void enqueue();
void dequeue();
void isEmpty();
void count();
void search();
void frontElement();
void rearElement();

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== QUEUE USING LINKED LIST ==========\n");
        printf("1. Create Queue\n");
        printf("2. Display Queue\n");
        printf("3. Enqueue\n");
        printf("4. Dequeue\n");
        printf("5. Is Empty\n");
        printf("6. Count Nodes\n");
        printf("7. Search\n");
        printf("8. Front Element\n");
        printf("9. Rear Element\n");
        printf("10. Exit\n");

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
            isEmpty();
            break;

        case 6:
            count();
            break;

        case 7:
            search();
            break;

        case 8:
            frontElement();
            break;

        case 9:
            rearElement();
            break;

        case 10:
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
    int n, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements!\n");
        return;
    }

    // Clear existing queue
    front = NULL;
    rear = NULL;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);

        node *newNode = malloc(sizeof(node));

        if (newNode == NULL)
        {
            printf("Memory allocation failed!\n");
            return;
        }

        newNode->data = value;
        newNode->link = NULL;

        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->link = newNode;
            rear = newNode;
        }
    }

    printf("Queue created successfully!\n");
}


// Display Queue
void display()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }

    node *temp = front;

    printf("Queue: ");

    while (temp != NULL)
    {
        printf("%d", temp->data);

        if (temp->link != NULL)
        {
            printf(" -> ");
        }

        temp = temp->link;
    }

    printf("\n");
}


// Enqueue
void enqueue()
{
    int value;

    printf("Enter element: ");
    scanf("%d", &value);

    node *newNode = malloc(sizeof(node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->link = NULL;

    // Queue is empty
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->link = newNode;
        rear = newNode;
    }

    printf("%d inserted into queue.\n", value);
}


// Dequeue
void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }

    node *temp = front;

    printf("%d deleted from queue.\n", front->data);

    front = front->link;

    // Queue became empty
    if (front == NULL)
    {
        rear = NULL;
    }

    free(temp);
}


// Is Empty
void isEmpty()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is not empty.\n");
    }
}


// Count Nodes
void count()
{
    int count = 0;

    node *temp = front;

    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    printf("Number of elements: %d\n", count);
}


// Search
void search()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }

    int value;
    int position = 1;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &value);

    node *temp = front;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("%d found at position %d.\n", value, position);
            found = 1;
            break;
        }

        temp = temp->link;
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
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Front element: %d\n", front->data);
}


// Rear Element
void rearElement()
{
    if (rear == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Rear element: %d\n", rear->data);
}