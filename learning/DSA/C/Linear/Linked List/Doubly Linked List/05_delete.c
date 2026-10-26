#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void deleteAtBeginning(void) {
    Node *old;
    if (head == NULL) { printf("List is empty!\n"); return; }
    old = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    printf("Deleted: %d\n", old->data);
    free(old);
    size--;
}

void deleteAtEnd(void) {
    Node *tail;
    if (head == NULL) { printf("List is empty!\n"); return; }
    tail = head;
    while (tail->next != NULL) tail = tail->next;
    printf("Deleted: %d\n", tail->data);
    if (tail->prev != NULL) tail->prev->next = NULL;
    else head = NULL;
    free(tail);
    size--;
}

void deleteAtPosition(void) {
    int position;
    Node *current;
    printf("Enter position (1 to %d): ", size);
    if (scanf("%d", &position) != 1 || position < 1 || position > size) {
        printf("Invalid position!\n");
        return;
    }
    current = head;
    for (int i = 1; i < position; i++) current = current->next;
    if (current->prev != NULL) current->prev->next = current->next;
    else head = current->next;
    if (current->next != NULL) current->next->prev = current->prev;
    printf("Deleted: %d\n", current->data);
    free(current);
    size--;
}
