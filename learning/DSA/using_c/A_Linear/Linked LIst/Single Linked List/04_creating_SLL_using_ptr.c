#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} nd;

int main(void) {
    nd *head = malloc(sizeof(nd));

    head->data = 45;

    head->link = malloc(sizeof(nd));
    head->link->data = 98;

    head->link->link = malloc(sizeof(nd));
    head->link->link->data = 34;
    head->link->link->link = NULL;

    nd *temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    free(head->link->link);
    free(head->link);
    free(head);

    printf("\n");
    return 0;
}