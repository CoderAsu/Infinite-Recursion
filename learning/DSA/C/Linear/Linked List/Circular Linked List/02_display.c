#include <stdio.h>
#include "linked_list.h"

void display(void) {
    Node *current;
    if (head == NULL) { printf("List is empty!\n"); return; }
    printf("List: ");
    current = head;
    for (int i = 0; i < size; i++) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("(back to head)\n");
}
