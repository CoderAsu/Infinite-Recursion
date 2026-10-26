#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

static Node *makeNode(void) {
    Node *node = malloc(sizeof *node);
    if (node == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    printf("Enter the value: ");
    if (scanf("%d", &node->data) != 1) {
        printf("Invalid input!\n");
        free(node);
        return NULL;
    }
    node->prev = NULL;
    node->next = NULL;
    return node;
}

void insertAtBeginning(void) {
    Node *node = makeNode();
    if (node == NULL) return;
    node->next = head;
    if (head != NULL) head->prev = node;
    head = node;
    size++;
}

void insertAtEnd(void) {
    Node *node = makeNode();
    Node *tail;
    if (node == NULL) return;
    if (head == NULL) head = node;
    else {
        tail = head;
        while (tail->next != NULL) tail = tail->next;
        tail->next = node;
        node->prev = tail;
    }
    size++;
}

void insertAtPosition(void) {
    int position;
    Node *node;
    printf("Enter position (1 to %d): ", size + 1);
    if (scanf("%d", &position) != 1 || position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return;
    }
    node = makeNode();
    if (node == NULL) return;
    if (position == 1) {
        node->next = head;
        if (head != NULL) head->prev = node;
        head = node;
    } else {
        Node *current = head;
        for (int i = 1; i < position - 1; i++) current = current->next;
        node->next = current->next;
        node->prev = current;
        if (current->next != NULL) current->next->prev = node;
        current->next = node;
    }
    size++;
}
