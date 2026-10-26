#include <stdio.h>
#include "linked_list.h"

void sort(void) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        Node *current = head;
        for (int j = 0; j < size - 1 - i; j++, current = current->next) {
            if (current->data > current->next->data) {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
            }
            
        }
    }
    printf("Linked list sorted successfully!\n");
}
