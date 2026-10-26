#include <stdio.h>
#include "linked_list.h"

void reverse(void) {
    Node *previous, *current, *next;
    if (head == NULL || size == 1) { printf("List reversed.\n"); return; }
    previous = head;
    current = head->next;
    for (int i = 1; i < size; i++) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head->next = previous;
    head = previous;
    printf("List reversed.\n");
}
