#include <stdio.h>
#include "linked_list.h"

void search(void) {
    int value, position = 1, found = 0;
    Node *current;
    printf("Enter value to search: ");
    if (scanf("%d", &value) != 1) { printf("Invalid input!\n"); return; }
    for (current = head; current != NULL; current = current->next, position++) {
        if (current->data == value) {
            printf("Found at position %d.\n", position);
            found = 1;
        }
    }
    if (!found) printf("Value not found.\n");
}
