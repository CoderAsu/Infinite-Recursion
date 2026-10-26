#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

static Node *makeNode(void) {
    Node *node = malloc(sizeof *node);
    if (node == NULL) { printf("Memory allocation failed!\n"); return NULL; }
    printf("Enter the value: ");
    if (scanf("%d", &node->data) != 1) { printf("Invalid input!\n"); free(node); return NULL; }
    node->next = NULL;
    return node;
}

void insertAtBeginning(void) {
    Node *node = makeNode();
    Node *tail;
    if (node == NULL) return;
    if (head == NULL) { head = node; node->next = node; }
    else {
        tail = head;
        while (tail->next != head) tail = tail->next;
        node->next = head;
        tail->next = node;
        head = node;
    }
    size++;
}

void insertAtEnd(void) {
    Node *node = makeNode();
    Node *tail;
    if (node == NULL) return;
    if (head == NULL) { head = node; node->next = node; }
    else {
        tail = head;
        while (tail->next != head) tail = tail->next;
        tail->next = node;
        node->next = head;
    }
    size++;
}

void insertAtPosition(void) {
    int position;
    printf("Enter position (1 to %d): ", size + 1);
    if (scanf("%d", &position) != 1 || position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 1) { insertAtBeginning(); return; }
    if (position == size + 1) { insertAtEnd(); return; }
    Node *node = makeNode();
    if (node == NULL) return;
    Node *previous = head;
    for (int i = 1; i < position - 1; i++) previous = previous->next;
    node->next = previous->next;
    previous->next = node;
    size++;
}
