#include <stdio.h>
#include "linked_list.h"

void display(void) {
    Node *current;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("List: NULL <-> ");
    for (current = head; current != NULL; current = current->next)
        printf("%d <-> ", current->data);
    printf("NULL\n");
}
