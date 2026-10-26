#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void deleteAtBeginning(void) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    Node *oldHead = head;
    int deleted = oldHead->data;
    head = head->next;
    free(oldHead);
    size--;
    printf("Deleted element: %d\n", deleted);
}

void deleteAtEnd(void) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    Node *current = head;
    if (current->next == NULL) {
        int deleted = current->data;
        free(current);
        head = NULL;
        size--;
        printf("Deleted element: %d\n", deleted);
        return;
    }
    while (current->next->next != NULL) current = current->next;
    int deleted = current->next->data;
    free(current->next);
    current->next = NULL;
    size--;
    printf("Deleted element: %d\n", deleted);
}

void deleteAtPosition(void) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    int position;
    printf("Enter the position (1 to %d): ", size);
    if (scanf("%d", &position) != 1 || position < 1 || position > size) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 1) {
        deleteAtBeginning();
        return;
    }
    Node *previous = head;
    for (int i = 1; i < position - 1; i++) previous = previous->next;
    Node *removed = previous->next;
    int deleted = removed->data;
    previous->next = removed->next;
    free(removed);
    size--;
    printf("Deleted element: %d\n", deleted);
}
