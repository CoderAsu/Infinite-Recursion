#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
} nd;


int main(){
    nd *head = NULL;

    head = malloc(sizeof(nd));

    head -> data = 45;
    head -> link = NULL;

    printf("%d", head->data);

    free(head);

    printf("\n");
    return 0;
}