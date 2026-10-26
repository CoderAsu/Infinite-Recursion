#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void deleteAtBeginning(void) {
    Node *old;
    if (head == NULL) { printf("List is empty!\n"); return; }
    old = head;
    if (size == 1) head = NULL;
    else {
        Node *tail = head;
        while (tail->next != head) tail = tail->next;
        head = head->next;
        tail->next = head;
    }
    printf("Deleted: %d\n", old->data);
    free(old);
    size--;
}

void deleteAtEnd(void) {
    Node *previous;
    Node *tail;
    if (head == NULL) { printf("List is empty!\n"); return; }
    if (size == 1) { deleteAtBeginning(); return; }
    previous = head;
    while (previous->next->next != head) previous = previous->next;
    tail = previous->next;
    previous->next = head;
    printf("Deleted: %d\n", tail->data);
    free(tail);
    size--;
}

void deleteAtPosition(void) {
    int position;
    if (head == NULL) { printf("List is empty!\n"); return; }
    printf("Enter position (1 to %d): ", size);
    if (scanf("%d", &position) != 1 || position < 1 || position > size) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 1) { deleteAtBeginning(); return; }
    Node *previous = head;
    for (int i = 1; i < position - 1; i++) previous = previous->next;
    Node *removed = previous->next;
    previous->next = removed->next;
    printf("Deleted: %d\n", removed->data);
    free(removed);
    size--;
}
