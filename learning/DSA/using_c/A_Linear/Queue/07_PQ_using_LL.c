#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    int priority;
    struct Node *link;
} node;

node *front = NULL;

// Function declarations
void create();
void display();
void enqueue();
void dequeue();
void peek();
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
        printf("\n========== PRIORITY QUEUE USING LINKED LIST ==========\n");
        printf("1. Create Queue\n");
        printf("2. Display Queue\n");
        printf("3. Enqueue\n");
        printf("4. Dequeue\n");
        printf("5. Peek\n");
        printf("6. Is Empty\n");
        printf("7. Count Elements\n");
        printf("8. Search\n");
        printf("9. Front Element\n");
        printf("10. Rear Element\n");
        printf("11. Exit\n");

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
            count();
            break;

        case 8:
            search();
            break;

        case 9:
            frontElement();
            break;

        case 10:
            rearElement();
            break;

        case 11:
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
    int n;
    int data;
    int priority;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements!\n");
        return;
    }

    // Clear existing queue
    front = NULL;

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter data: ");
        scanf("%d", &data);

        printf("Enter priority: ");
        scanf("%d", &priority);

        node *newNode = malloc(sizeof(node));

        if (newNode == NULL)
        {
            printf("Memory allocation failed!\n");
            return;
        }

        newNode->data = data;
        newNode->priority = priority;
        newNode->link = NULL;

        // First node
        if (front == NULL)
        {
            front = newNode;
        }
        else
        {
            node *temp = front;

            while (temp->link != NULL)
            {
                temp = temp->link;
            }

            temp->link = newNode;
        }
    }

    printf("\nPriority queue created successfully!\n");
}


// Display
void display()
{
    if (front == NULL)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    node *temp = front;

    printf("\nData\tPriority\n");
    printf("----------------\n");

    while (temp != NULL)
    {
        printf("%d\t%d\n",
               temp->data,
               temp->priority);

        temp = temp->link;
    }
}


// Enqueue
void enqueue()
{
    int data;
    int priority;

    printf("Enter data: ");
    scanf("%d", &data);

    printf("Enter priority: ");
    scanf("%d", &priority);

    node *newNode = malloc(sizeof(node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = data;
    newNode->priority = priority;
    newNode->link = NULL;

    // Queue is empty
    if (front == NULL)
    {
        front = newNode;
    }

    // New node has higher priority
    else if (priority < front->priority)
    {
        newNode->link = front;
        front = newNode;
    }

    // Find correct position
    else
    {
        node *temp = front;

        while (temp->link != NULL &&
               temp->link->priority <= priority)
        {
            temp = temp->link;
        }

        newNode->link = temp->link;
        temp->link = newNode;
    }

    printf("%d inserted with priority %d.\n",
           data, priority);
}


// Dequeue
void dequeue()
{
    if (front == NULL)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    node *temp = front;

    printf("%d deleted from priority queue.\n",
           front->data);

    front = front->link;

    free(temp);
}


// Peek
void peek()
{
    if (front == NULL)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    printf("Highest priority element: %d\n",
           front->data);

    printf("Priority: %d\n",
           front->priority);
}


// Is Empty
void isEmpty()
{
    if (front == NULL)
    {
        printf("Priority queue is empty.\n");
    }
    else
    {
        printf("Priority queue is not empty.\n");
    }
}


// Count
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
        printf("Priority queue is empty!\n");
        return;
    }

    int data;
    int position = 1;
    int found = 0;

    printf("Enter data to search: ");
    scanf("%d", &data);

    node *temp = front;

    while (temp != NULL)
    {
        if (temp->data == data)
        {
            printf("%d found at position %d.\n",
                   data, position);

            printf("Priority: %d\n",
                   temp->priority);

            found = 1;
            break;
        }

        temp = temp->link;
        position++;
    }

    if (!found)
    {
        printf("%d not found.\n", data);
    }
}


// Front Element
void frontElement()
{
    if (front == NULL)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    printf("Front element: %d\n",
           front->data);

    printf("Priority: %d\n",
           front->priority);
}


// Rear Element
void rearElement()
{
    if (front == NULL)
    {
        printf("Priority queue is empty!\n");
        return;
    }

    node *temp = front;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }

    printf("Rear element: %d\n",
           temp->data);

    printf("Priority: %d\n",
           temp->priority);
}