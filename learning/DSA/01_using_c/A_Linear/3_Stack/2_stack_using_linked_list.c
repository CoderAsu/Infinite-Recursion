#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Top pointer
struct Node *top = NULL;

// Check if stack is empty
int isEmpty() {
    if (top == NULL)
        return 1;
    else
        return 0;
}

// Push operation
void push(int value) {
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Stack Overflow!\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack.\n", value);
}

// Pop operation
void pop() {
    struct Node *temp;

    if (isEmpty()) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }

    temp = top;

    printf("%d popped from stack.\n", top->data);

    top = top->next;

    free(temp);
}

// Peek operation
void peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top element is %d\n", top->data);
}

// Display operation
void display() {
    struct Node *temp;

    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    temp = top;

    printf("Stack elements:\n");

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Main function
int main() {
    int choice;
    int value;

    while (1) {

        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Check if Empty\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                if (isEmpty())
                    printf("Stack is empty.\n");
                else
                    printf("Stack is not empty.\n");
                break;

            case 6:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}