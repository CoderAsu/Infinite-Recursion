#include <stdio.h>
#include "linked_list.h"

void sort(void) {
    for (int i = 0; i < size - 1; i++) {
        Node *current = head;
        for (int j = 0; j < size - 1 - i; j++) {
            if (current->data > current->next->data) {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
            }
            current = current->next;
        }
    }
    printf("List sorted.\n");
}
