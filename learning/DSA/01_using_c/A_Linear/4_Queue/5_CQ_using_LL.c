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
        printf("\n========== CIRCULAR QUEUE USING LINKED LIST ==========\n");
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

        // First node
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;

            rear->link = front;
        }
        else
        {
            rear->link = newNode;
            rear = newNode;

            rear->link = front;
        }
    }

    printf("Circular queue created successfully!\n");
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

    printf("Circular Queue: ");

    do
    {
        printf("%d", temp->data);

        if (temp != rear)
        {
            printf(" -> ");
        }

        temp = temp->link;

    } while (temp != front);

    printf(" -> FRONT\n");
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

    // Queue is empty
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;

        rear->link = front;
    }
    else
    {
        newNode->link = front;

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

    // Only one node
    if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        front = front->link;

        rear->link = front;
    }

    free(temp);
}


// Peek
void peek()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Front element: %d\n", front->data);
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


// Count Elements
void count()
{
    if (front == NULL)
    {
        printf("Number of elements: 0\n");
        return;
    }

    int count = 0;

    node *temp = front;

    do
    {
        count++;
        temp = temp->link;

    } while (temp != front);

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

    do
    {
        if (temp->data == value)
        {
            printf("%d found at position %d.\n",
                   value, position);

            found = 1;
            break;
        }

        temp = temp->link;
        position++;

    } while (temp != front);

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