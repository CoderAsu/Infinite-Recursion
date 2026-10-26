#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void destroy(void) {
    Node *current = head;
    for (int i = 0; i < size; i++) {
        Node *next = current->next;
        free(current);
        current = next;
    }
    head = NULL;
    size = 0;
    printf("List destroyed.\n");
}
