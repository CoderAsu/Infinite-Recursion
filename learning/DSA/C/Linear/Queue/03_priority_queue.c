#include <stdio.h>

#define MAX 100

int values[MAX];
int priorities[MAX];
int count = 0;

int isEmpty(void) {
    return count == 0;
}

int isFull(void) {
    return count == MAX;
}

void peek(void) {
    if (isEmpty()) printf("Queue is empty.\n");
    else printf("Front value: %d (priority %d)\n", values[0], priorities[0]);
}

void enqueue(void) {
    int value, priority;
    if (isFull()) {
        printf("Queue is full.\n");
        return;
    }
    printf("Enter value and priority (smaller number = higher priority): ");
    if (scanf("%d %d", &value, &priority) != 2) {
        printf("Invalid input.\n");
        return;
    }

    int i = count;
    while (i > 0 && priorities[i - 1] > priority) {
        values[i] = values[i - 1];
        priorities[i] = priorities[i - 1];
        i--;
    }
    values[i] = value;
    priorities[i] = priority;
    count++;
}

void dequeue(void) {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Removed: %d (priority %d)\n", values[0], priorities[0]);
    for (int i = 1; i < count; i++) {
        values[i - 1] = values[i];
        priorities[i - 1] = priorities[i];
    }
    count--;
}

void display(void) {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = 0; i < count; i++)
        printf("Value: %d, Priority: %d\n", values[i], priorities[i]);
}

int main(void) {
    int choice;
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. isEmpty\n5. isFull\n6. Display\n0. Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: printf(isEmpty() ? "Queue is empty.\n" : "Queue is not empty.\n"); break;
            case 5: printf(isFull() ? "Queue is full.\n" : "Queue is not full.\n"); break;
            case 6: display(); break;
            case 0: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}
