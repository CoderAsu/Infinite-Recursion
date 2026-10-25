#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} node;

node *front = NULL;
node *rear = NULL;

// Function declarations
void create();
void display();

void insertFront();
void insertRear();

void deleteFront();
void deleteRear();

void peekFront();
void peekRear();

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
        printf("\n========== DEQUE USING LINKED LIST ==========\n");
        printf("1. Create Deque\n");
        printf("2. Display Deque\n");
        printf("3. Insert at Front\n");
        printf("4. Insert at Rear\n");
        printf("5. Delete from Front\n");
        printf("6. Delete from Rear\n");
        printf("7. Peek Front\n");
        printf("8. Peek Rear\n");
        printf("9. Is Empty\n");
        printf("10. Count Elements\n");
        printf("11. Search\n");
        printf("12. Front Element\n");
        printf("13. Rear Element\n");
        printf("14. Exit\n");

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
            insertFront();
            break;

        case 4:
            insertRear();
            break;

        case 5:
            deleteFront();
            break;

        case 6:
            deleteRear();
            break;

        case 7:
            peekFront();
            break;

        case 8:
            peekRear();
            break;

        case 9:
            isEmpty();
            break;

        case 10:
            count();
            break;

        case 11:
            search();
            break;

        case 12:
            frontElement();
            break;

        case 13:
            rearElement();
            break;

        case 14:
            printf("Program exited.\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}


// Create Deque
void create()
{
    int n;
    int value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements!\n");
        return;
    }

    // Clear existing deque
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
        newNode->prev = NULL;
        newNode->next = NULL;

        // First node
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }
    }

    printf("Deque created successfully!\n");
}


// Display Deque
void display()
{
    if (front == NULL)
    {
        printf("Deque is empty!\n");
        return;
    }

    node *temp = front;

    printf("Deque: ");

    while (temp != NULL)
    {
        printf("%d", temp->data);

        if (temp->next != NULL)
        {
            printf(" <-> ");
        }

        temp = temp->next;
    }

    printf("\n");
}


// Insert at Front
void insertFront()
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
    newNode->prev = NULL;
    newNode->next = front;

    // Deque is empty
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        front->prev = newNode;
        front = newNode;
    }

    printf("%d inserted at front.\n", value);
}


// Insert at Rear
void insertRear()
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
    newNode->prev = rear;
    newNode->next = NULL;

    // Deque is empty
    if (rear == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d inserted at rear.\n", value);
}


// Delete from Front
void deleteFront()
{
    if (front == NULL)
    {
        printf("Deque is empty!\n");
        return;
    }

    node *temp = front;

    printf("%d deleted from front.\n",
           front->data);

    // Only one node
    if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        front = front->next;
        front->prev = NULL;
    }

    free(temp);
}


// Delete from Rear
void deleteRear()
{
    if (rear == NULL)
    {
        printf("Deque is empty!\n");
        return;
    }

    node *temp = rear;

    printf("%d deleted from rear.\n",
           rear->data);

    // Only one node
    if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        rear = rear->prev;
        rear->next = NULL;
    }

    free(temp);
}


// Peek Front
void peekFront()
{
    if (front == NULL)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Front element: %d\n",
           front->data);
}


// Peek Rear
void peekRear()
{
    if (rear == NULL)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Rear element: %d\n",
           rear->data);
}


// Is Empty
void isEmpty()
{
    if (front == NULL)
    {
        printf("Deque is empty.\n");
    }
    else
    {
        printf("Deque is not empty.\n");
    }
}


// Count Elements
void count()
{
    int count = 0;

    node *temp = front;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Number of elements: %d\n", count);
}


// Search
void search()
{
    if (front == NULL)
    {
        printf("Deque is empty!\n");
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
            printf("%d found at position %d.\n",
                   value, position);

            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (!found)
    {
        printf("%d not found in deque.\n", value);
    }
}


// Front Element
void frontElement()
{
    if (front == NULL)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Front element: %d\n",
           front->data);
}


// Rear Element
void rearElement()
{
    if (rear == NULL)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Rear element: %d\n",
           rear->data);
}