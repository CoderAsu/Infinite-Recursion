#include <stdio.h>
#include "linked_list.h"

void search(void) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    int value, position = 1, found = 0;
    printf("Enter the element to search: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input!\n");
        return;
    }
    for (Node *current = head; current != NULL; current = current->next, position++) {
        if (current->data == value) {
            printf("%d found at position %d\n", value, position);
            found = 1;
        }
    }
    if (!found) printf("Element not found!\n");
}
