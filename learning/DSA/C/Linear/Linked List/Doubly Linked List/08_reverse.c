#include <stdio.h>
#include "linked_list.h"

void reverse(void) {
    Node *current = head;
    while (current != NULL) {
        Node *next = current->next;
        current->next = current->prev;
        current->prev = next;
        current = next;
    }
    if (head != NULL) head = head->prev;
    printf("List reversed.\n");
}
