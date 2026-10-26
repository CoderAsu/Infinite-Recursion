#include <stdio.h>

#define MAX 100

int deque[MAX];
int front = 0;
int count = 0;

int isEmpty(void) {
    return count == 0;
}

int isFull(void) {
    return count == MAX;
}

void peek(void) {
    if (isEmpty()) printf("Deque is empty.\n");
    else printf("Front value: %d\n", deque[front]);
}

void addFront(void) {
    int value;
    if (isFull()) {
        printf("Deque is full.\n");
        return;
    }
    printf("Enter a value: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input.\n");
        return;
    }
    front = (front - 1 + MAX) % MAX;
    deque[front] = value;
    count++;
}

void addRear(void) {
    int value;
    if (isFull()) {
        printf("Deque is full.\n");
        return;
    }
    printf("Enter a value: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input.\n");
        return;
    }
    deque[(front + count) % MAX] = value;
    count++;
}

void removeFront(void) {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Removed: %d\n", deque[front]);
    front = (front + 1) % MAX;
    count--;
}

void removeRear(void) {
    int rear;
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    rear = (front + count - 1) % MAX;
    printf("Removed: %d\n", deque[rear]);
    count--;
}

void display(void) {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    for (int i = 0; i < count; i++) printf("%d ", deque[(front + i) % MAX]);
    printf("\n");
}

int main(void) {
    int choice;
    do {
        printf("\n1. Add front\n2. Add rear\n3. Remove front\n4. Remove rear\n5. Peek front\n6. isEmpty\n7. isFull\n8. Display\n0. Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
            case 1: addFront(); break;
            case 2: addRear(); break;
            case 3: removeFront(); break;
            case 4: removeRear(); break;
            case 5: peek(); break;
            case 6: printf(isEmpty() ? "Deque is empty.\n" : "Deque is not empty.\n"); break;
            case 7: printf(isFull() ? "Deque is full.\n" : "Deque is not full.\n"); break;
            case 8: display(); break;
            case 0: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}
