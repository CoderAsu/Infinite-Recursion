#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int stackSize;

int isEmpty(void) {
    return top == -1;
}

void push(void) {
    int value;

    if (top == stackSize - 1) {
        printf("Stack is full.\n");
        return;
    }

    printf("Enter a value: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input.\n");
        return;
    }

    stack[++top] = value;
    printf("Pushed %d.\n", value);
}

void pop(void) {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Popped: %d\n", stack[top--]);
}

void peek(void) {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top value: %d\n", stack[top]);
}

int main(void) {
    int choice;

    printf("Enter the stack size: ");
    if (scanf("%d", &stackSize) != 1 || stackSize <= 0) {
        printf("Enter a positive size.\n");
        return 1;
    }

    stack = malloc((size_t)stackSize * sizeof *stack);
    if (stack == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

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

    free(stack);
    return 0;
}
