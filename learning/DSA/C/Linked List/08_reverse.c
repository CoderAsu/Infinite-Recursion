#include <stdio.h>
#include "linked_list.h"

void reverse(void) {
    Node *previous = NULL;
    Node *current = head;
    while (current != NULL) {
        Node *next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
    printf("Linked list reversed successfully!\n");
}
