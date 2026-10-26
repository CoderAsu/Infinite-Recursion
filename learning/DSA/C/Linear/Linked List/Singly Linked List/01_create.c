#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *head = NULL;
int size = 0;

void create(void) {
    if (head != NULL) {
        printf("List already exists! Destroy it first.\n");
        return;
    }

    int count;
    printf("Enter the number of nodes: ");
    if (scanf("%d", &count) != 1 || count < 0) {
        printf("Invalid size!\n");
        return;
    }

    Node *tail = NULL;
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
            printf("Invalid input! Destroying the list.\n");
            destroy();
            return;
        }
        node->next = NULL;

        if (head == NULL) {
            head = node;
        } else {
            tail->next = node;
        }
        tail = node;
        size++;
    }

    printf("Linked list created successfully with %d node(s).\n", size);
}
