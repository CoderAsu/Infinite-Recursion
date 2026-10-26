#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *top = NULL;

int isEmpty(void) {
    return top == NULL;
}

void push(void) {
    int value;
    Node *newNode;

    printf("Enter a value: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input.\n");
        return;
    }

    newNode = malloc(sizeof *newNode);
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d.\n", value);
}

void pop(void) {
    Node *removedNode;

    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    removedNode = top;
    printf("Popped: %d\n", removedNode->data);
    top = top->next;
    free(removedNode);
}

void peek(void) {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top value: %d\n", top->data);
}

int main(void) {
    int choice;

    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. isEmpty\n0. Exit\n");
        printf("Choose an operation: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            break;
        }

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: printf(isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n"); break;
            case 0: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    while (!isEmpty()) {
        pop();
    }
    return 0;
}
