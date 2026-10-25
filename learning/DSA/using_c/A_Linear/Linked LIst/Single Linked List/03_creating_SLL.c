#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
}nd;

int main(){
    nd *head = NULL;
    head = (nd *)malloc(sizeof(nd));

    head -> data = 45;
    head -> link = NULL;

    nd *current = (nd *)malloc(sizeof(nd));
    
    current -> data = 98;
    current -> link = NULL;

    head -> link = current;

    nd *current2 = (nd *)malloc(sizeof(nd));

    current2 -> data = 34;
    current2 -> link = NULL;

    current -> link = current2;

    nd *temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }


    free(head);
    free(current);
    free(current2);

    printf("\n");
    return 0;
}

// In this method we are unnecessary using the pointer current, current2. Suppose if we have 100 of node then we are going to create 100 pointer which is bad for memory.

// So we will follow second approach

/*
    head -> link = 2000 (address of second node)
    head -> link -> link = 300 (address of third node)
*/