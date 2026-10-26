#ifndef ARRAY_H
#define ARRAY_H

extern int *arr;
extern int size;
extern int capacity;

void create();
void display();
void destroy();

void insertAtBeginning();
void insertAtEnd();
void insertAtPosition();

void deleteAtBeginning();
void deleteAtEnd();
void deleteAtPosition();

void reverse();
void search();
void sort();

#endif