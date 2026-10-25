#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
} node;

node *head = NULL;

// Function declarations
void create();
void display();

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
        printf("\n========== SINGLY LINKED LIST ==========\n");
        printf("1.  Create\n");
        printf("2.  Display\n");
        printf("3.  Insert at Beginning\n");
        printf("4.  Insert at End\n");
        printf("5.  Insert at Position\n");
        printf("6.  Delete at Beginning\n");
        printf("7.  Delete at End\n");
        printf("8.  Delete at Position\n");
        printf("9.  Update\n");
        printf("10. Count Nodes\n");
        printf("11. Reverse\n");
        printf("12. Sort\n");
        printf("13. Search\n");
        printf("14. Minimum\n");
        printf("15. Maximum\n");
        printf("16. Exit\n");

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
            insertAtBeginning();
            break;

        case 4:
            insertAtEnd();
            break;

        case 5:
            insertAtPosition();
            break;

        case 6:
            deleteAtBeginning();
            break;

        case 7:
            deleteAtEnd();
            break;

        case 8:
            deleteAtPosition();
            break;

        case 9:
            update();
            break;

        case 10:
            countNodes();
            break;

        case 11:
            reverse();
            break;

        case 12:
            sort();
            break;

        case 13:
            search();
            break;

        case 14:
            min();
            break;

        case 15:
            max();
            break;

        case 16:
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
        newNode->link = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *temp = head;

            while (temp->link != NULL)
            {
                temp = temp->link;
            }

            temp->link = newNode;
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

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
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
    newNode->link = head;

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
    newNode->link = NULL;

    if (head == NULL)
    {
        head = newNode;

        printf("Node inserted at end.\n");
        return;
    }

    node *temp = head;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = newNode;

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
        temp = temp->link;
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

    newNode->link = temp->link;
    temp->link = newNode;

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

    head = head->link;

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

    // Only one node
    if (head->link == NULL)
    {
        free(head);
        head = NULL;

        printf("Node deleted from end.\n");
        return;
    }

    node *temp = head;

    while (temp->link->link != NULL)
    {
        temp = temp->link;
    }

    free(temp->link);
    temp->link = NULL;

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

    for (int i = 1; i < position - 1 && temp->link != NULL; i++)
    {
        temp = temp->link;
    }

    if (temp->link == NULL)
    {
        printf("Invalid position!\n");
        return;
    }

    node *deleteNode = temp->link;

    temp->link = deleteNode->link;

    free(deleteNode);

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
        temp = temp->link;
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
        temp = temp->link;
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

    node *prev = NULL;
    node *current = head;
    node *next = NULL;

    while (current != NULL)
    {
        next = current->link;

        current->link = prev;

        current = next;
    }

    head = prev;

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

    for (i = head; i != NULL; i = i->link)
    {
        for (j = i->link; j != NULL; j = j->link)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }

    printf("Linked List sorted in ascending order.\n");
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

        temp = temp->link;
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

        temp = temp->link;
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

        temp = temp->link;
    }

    printf("Maximum value: %d\n", maximum);
}