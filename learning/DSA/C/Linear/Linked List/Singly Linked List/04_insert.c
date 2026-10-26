#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

static Node *readNode(void) {
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
    node->next = NULL;
    return node;
}

void insertAtBeginning(void) {
    Node *node = readNode();
    if (node == NULL) return;
    node->next = head;
    head = node;
    size++;
    printf("Element inserted successfully!\n");
}

void insertAtEnd(void) {
    Node *node = readNode();
    if (node == NULL) return;

    if (head == NULL) {
        head = node;
    } else {
        Node *current = head;
        while (current->next != NULL) current = current->next;
        current->next = node;
    }
    size++;
    printf("Element inserted successfully!\n");
}

void insertAtPosition(void) {
    int position;
    printf("Enter the position (1 to %d): ", size + 1);
    if (scanf("%d", &position) != 1 || position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return;
    }

    Node *node = readNode();
    if (node == NULL) return;
    if (position == 1) {
        node->next = head;
        head = node;
    } else {
        Node *previous = head;
        for (int i = 1; i < position - 1; i++) previous = previous->next;
        node->next = previous->next;
        previous->next = node;
    }
    size++;
    printf("Element inserted successfully!\n");
}
