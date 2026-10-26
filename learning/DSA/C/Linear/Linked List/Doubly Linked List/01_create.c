#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *head = NULL;
int size = 0;

void create(void) {
    int count;
    Node *tail = NULL;

    if (head != NULL) {
        printf("List already exists! Destroy it first.\n");
        return;
    }
    printf("Enter the number of nodes: ");
    if (scanf("%d", &count) != 1 || count < 0) {
        printf("Invalid size!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        Node *node = malloc(sizeof *node);
        if (node == NULL) {
            printf("Memory allocation failed!\n");
            destroy();
            return;
        }
        printf("Enter value for node %d: ", i + 1);
        if (scanf("%d", &node->data) != 1) {
            free(node);
            printf("Invalid input!\n");
            destroy();
            return;
        }
        node->prev = tail;
        node->next = NULL;
        if (tail == NULL) head = node;
        else tail->next = node;
        tail = node;
        size++;
    }
    printf("Doubly linked list created with %d node(s).\n", size);
}
