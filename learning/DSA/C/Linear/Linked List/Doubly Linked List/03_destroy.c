#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void destroy(void) {
    while (head != NULL) {
        Node *next = head->next;
        free(head);
        head = next;
    }
    size = 0;
    printf("List destroyed.\n");
}
