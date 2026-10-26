#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void destroy(void)
{
    while (head != NULL) {
    Node *next = head->next;  // save the next node's address
    free(head);
    head = next;
}

    head = NULL;
    size = 0;
    printf("Linked list destroyed successfully!\n");
}
