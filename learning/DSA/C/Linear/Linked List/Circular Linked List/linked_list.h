#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

extern Node *head;
extern int size;

void create(void);
void display(void);
void destroy(void);
void insertAtBeginning(void);
void insertAtEnd(void);
void insertAtPosition(void);
void deleteAtBeginning(void);
void deleteAtEnd(void);
void deleteAtPosition(void);
void search(void);
void sort(void);
void reverse(void);

#endif
