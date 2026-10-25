#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} node;

node *head = NULL;

// Function declarations
void create();
void display();
void displayReverse();

void insertAtBeginning();
void insertAtEnd();
void insertAtPosition();

void deleteAtBeginning();
void deleteAtEnd();
void deleteAtPosition();

void update();
void countNodes();
void reverse();

void sort();
void search();
void min();
void max();

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== DOUBLY LINKED LIST ==========\n");
        printf("1.  Create\n");
        printf("2.  Display\n");
        printf("3.  Display Reverse\n");
        printf("4.  Insert at Beginning\n");
        printf("5.  Insert at End\n");
        printf("6.  Insert at Position\n");
        printf("7.  Delete at Beginning\n");
        printf("8.  Delete at End\n");
        printf("9.  Delete at Position\n");
        printf("10. Update\n");
        printf("11. Count Nodes\n");
        printf("12. Reverse\n");
        printf("13. Sort\n");
        printf("14. Search\n");
        printf("15. Minimum\n");
        printf("16. Maximum\n");
        printf("17. Exit\n");

        printf("\nEnter your choice: ");
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
            displayReverse();
            break;

        case 4:
            insertAtBeginning();
            break;

        case 5:
            insertAtEnd();
            break;

        case 6:
            insertAtPosition();
            break;

        case 7:
            deleteAtBeginning();
            break;

        case 8:
            deleteAtEnd();
            break;

        case 9:
            deleteAtPosition();
            break;

        case 10:
            update();
            break;

        case 11:
            countNodes();
            break;

        case 12:
            reverse();
            break;

        case 13:
            sort();
            break;

        case 14:
            search();
            break;

        case 15:
            min();
            break;

        case 16:
            max();
            break;

        case 17:
            printf("Program exited.\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Create
void create()
{
    int n, value;

    if (head != NULL)
    {
        printf("Linked List already exists!\n");
        return;
    }

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of nodes!\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter data for node %d: ", i + 1);
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

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    printf("Linked List created successfully.\n");
}

// Display
void display()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *temp = head;

    printf("NULL <-> ");

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Display Reverse
void displayReverse()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    printf("NULL <-> ");

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }

    printf("NULL\n");
}

// Insert at Beginning
void insertAtBeginning()
{
    int value;

    printf("Enter value: ");
    scanf("%d", &value);

    node *newNode = malloc(sizeof(node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
    {
        head->prev = newNode;
    }

    head = newNode;

    printf("Node inserted at beginning.\n");
}

// Insert at End
void insertAtEnd()
{
    int value;

    printf("Enter value: ");
    scanf("%d", &value);

    node *newNode = malloc(sizeof(node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;

        printf("Node inserted at end.\n");
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    printf("Node inserted at end.\n");
}

// Insert at Position
void insertAtPosition()
{
    int position, value;

    printf("Enter position: ");
    scanf("%d", &position);

    if (position < 1)
    {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1)
    {
        insertAtBeginning();
        return;
    }

    node *temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    node *newNode = malloc(sizeof(node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;

    newNode->prev = temp;
    newNode->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;

    printf("Node inserted at position %d.\n", position);
}

// Delete at Beginning
void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *temp = head;

    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    free(temp);

    printf("Node deleted from beginning.\n");
}

// Delete at End
void deleteAtEnd()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *temp = head;

    if (head->next == NULL)
    {
        head = NULL;
        free(temp);

        printf("Node deleted from end.\n");
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    free(temp);

    printf("Node deleted from end.\n");
}

// Delete at Position
void deleteAtPosition()
{
    int position;

    printf("Enter position: ");
    scanf("%d", &position);

    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    if (position < 1)
    {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1)
    {
        deleteAtBeginning();
        return;
    }

    node *temp = head;

    for (int i = 1; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    temp->prev->next = temp->next;

    free(temp);

    printf("Node deleted from position %d.\n", position);
}

// Update
void update()
{
    int position, value;

    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &position);

    if (position < 1)
    {
        printf("Invalid position!\n");
        return;
    }

    node *temp = head;

    for (int i = 1; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter new value: ");
    scanf("%d", &value);

    temp->data = value;

    printf("Node updated successfully.\n");
}

// Count Nodes
void countNodes()
{
    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Number of nodes: %d\n", count);
}

// Reverse
void reverse()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *current = head;
    node *temp = NULL;

    while (current != NULL)
    {
        temp = current->prev;

        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if (temp != NULL)
    {
        head = temp->prev;
    }

    printf("Linked List reversed successfully.\n");
}

// Sort
void sort()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *i;
    node *j;
    int temp;

    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }

    printf("Linked List sorted successfully.\n");
}

// Search
void search()
{
    int value;
    int position = 1;

    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("%d found at position %d.\n", value, position);
            return;
        }

        temp = temp->next;
        position++;
    }

    printf("%d not found.\n", value);
}

// Minimum
void min()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *temp = head;
    int minimum = head->data;

    while (temp != NULL)
    {
        if (temp->data < minimum)
        {
            minimum = temp->data;
        }

        temp = temp->next;
    }

    printf("Minimum value: %d\n", minimum);
}

// Maximum
void max()
{
    if (head == NULL)
    {
        printf("Linked List is empty!\n");
        return;
    }

    node *temp = head;
    int maximum = head->data;

    while (temp != NULL)
    {
        if (temp->data > maximum)
        {
            maximum = temp->data;
        }

        temp = temp->next;
    }

    printf("Maximum value: %d\n", maximum);
}