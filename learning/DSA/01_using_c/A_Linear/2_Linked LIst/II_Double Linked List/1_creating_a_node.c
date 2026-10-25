/*
    A doubly linked list is a type of linked list where each node has two pointers:
    1. Next pointer -> points to the next node in the sequence.
    2. Previous pointer -> points to the previous node in the sequence.



    Bidirectional traversal: You can move forward (next) or backward (prev).
    
    Dynamic memory: Nodes are created at runtime using malloc().

    Efficient insertion/deletion: Easier than singly linked lists because you can directly access both neighbors.

    Head and Tail:
    The head points to the first node.
    The tail points to the last node (whose next = NULL).

*/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){

    struct Node *head = malloc(sizeof(struct Node));
    
    head -> prev = NULL;
    head -> data = 45;
    head -> next = NULL;

    return 0;
}