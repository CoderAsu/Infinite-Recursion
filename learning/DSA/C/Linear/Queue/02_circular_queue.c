#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = 0;
int rear = -1;
int count = 0;

int isEmpty(void) {
    return count == 0;
}

int isFull(void) {
    return count == MAX;
}

void peek(void) {
    if (isEmpty()) printf("Queue is empty.\n");
    else printf("Front value: %d\n", queue[front]);
}

void enqueue(void) {
    int value;
    if (isFull()) {
        printf("Queue is full.\n");
        return;
    }
    printf("Enter a value: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input.\n");
        return;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    count++;
}

void dequeue(void) {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Removed: %d\n", queue[front]);
    front = (front + 1) % MAX;
    count--;
}

void display(void) {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = 0; i < count; i++) printf("%d ", queue[(front + i) % MAX]);
    printf("\n");
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
