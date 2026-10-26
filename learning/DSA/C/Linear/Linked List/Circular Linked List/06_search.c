#include <stdio.h>
#include "linked_list.h"

void search(void) {
    int value, found = 0;
    Node *current = head;
    printf("Enter value to search: ");
    if (scanf("%d", &value) != 1) { printf("Invalid input!\n"); return; }
    for (int position = 1; position <= size; position++) {
        if (current->data == value) {
            printf("Found at position %d.\n", position);
            found = 1;
        }
        current = current->next;
    }
    if (!found) printf("Value not found.\n");
}
