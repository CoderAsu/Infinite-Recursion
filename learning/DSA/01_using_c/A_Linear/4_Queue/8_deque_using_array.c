#include <stdio.h>
#include <stdlib.h>

int *deque = NULL;
int size = 0;
int front = -1;
int rear = -1;

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
        printf("\n========== DEQUE USING ARRAY ==========\n");
        printf("1. Create Deque\n");
        printf("2. Display Deque\n");
        printf("3. Insert at Front\n");
        printf("4. Insert at Rear\n");
        printf("5. Delete from Front\n");
        printf("6. Delete from Rear\n");
        printf("7. Peek Front\n");
        printf("8. Peek Rear\n");
        printf("9. Is Empty\n");
        printf("10. Is Full\n");
        printf("11. Count Elements\n");
        printf("12. Search\n");
        printf("13. Front Element\n");
        printf("14. Rear Element\n");
        printf("15. Exit\n");

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
            isFull();
            break;

        case 11:
            count();
            break;

        case 12:
            search();
            break;

        case 13:
            frontElement();
            break;

        case 14:
            rearElement();
            break;

        case 15:
            free(deque);
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
    printf("Enter deque size: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size!\n");
        size = 0;
        return;
    }

    deque = malloc(size * sizeof(int));

    if (deque == NULL)
    {
        printf("Memory allocation failed!\n");
        size = 0;
        return;
    }

    front = -1;
    rear = -1;

    printf("Deque created successfully!\n");
}


// Display Deque
void display()
{
    if (front == -1)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Deque: ");

    int i = front;

    while (1)
    {
        printf("%d", deque[i]);

        if (i == rear)
        {
            break;
        }

        printf(" -> ");

        i = (i + 1) % size;
    }

    printf("\n");
}


// Insert at Front
void insertFront()
{
    if (deque == NULL)
    {
        printf("Create the deque first!\n");
        return;
    }

    if ((rear + 1) % size == front)
    {
        printf("Deque is full!\n");
        return;
    }

    int value;

    printf("Enter element: ");
    scanf("%d", &value);

    // Deque is empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }

    // Move front backwards
    else if (front == 0)
    {
        front = size - 1;
    }
    else
    {
        front--;
    }

    deque[front] = value;

    printf("%d inserted at front.\n", value);
}


// Insert at Rear
void insertRear()
{
    if (deque == NULL)
    {
        printf("Create the deque first!\n");
        return;
    }

    if ((rear + 1) % size == front)
    {
        printf("Deque is full!\n");
        return;
    }

    int value;

    printf("Enter element: ");
    scanf("%d", &value);

    // Deque is empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }

    deque[rear] = value;

    printf("%d inserted at rear.\n", value);
}


// Delete from Front
void deleteFront()
{
    if (front == -1)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("%d deleted from front.\n",
           deque[front]);

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


// Delete from Rear
void deleteRear()
{
    if (front == -1)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("%d deleted from rear.\n",
           deque[rear]);

    // Only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }

    // Move rear backwards
    else if (rear == 0)
    {
        rear = size - 1;
    }
    else
    {
        rear--;
    }
}


// Peek Front
void peekFront()
{
    if (front == -1)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Front element: %d\n",
           deque[front]);
}


// Peek Rear
void peekRear()
{
    if (front == -1)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Rear element: %d\n",
           deque[rear]);
}


// Is Empty
void isEmpty()
{
    if (front == -1)
    {
        printf("Deque is empty.\n");
    }
    else
    {
        printf("Deque is not empty.\n");
    }
}


// Is Full
void isFull()
{
    if (deque == NULL)
    {
        printf("Deque is not created.\n");
        return;
    }

    if ((rear + 1) % size == front)
    {
        printf("Deque is full.\n");
    }
    else
    {
        printf("Deque is not full.\n");
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
        printf("Deque is empty!\n");
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
        if (deque[i] == value)
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
        printf("%d not found in deque.\n", value);
    }
}


// Front Element
void frontElement()
{
    if (front == -1)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Front element: %d\n",
           deque[front]);
}


// Rear Element
void rearElement()
{
    if (rear == -1)
    {
        printf("Deque is empty!\n");
        return;
    }

    printf("Rear element: %d\n",
           deque[rear]);
}