#include <stdio.h>
#include "linked_list.h"

void display(void) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("List: ");
    for (Node *current = head; current != NULL; current = current->next) {
        printf("%d -> ", current->data);
    }
    printf("NULL\n");
}
