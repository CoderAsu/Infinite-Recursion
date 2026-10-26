#ifndef SORTING_H
#define SORTING_H

extern int *arr;
extern int size;
extern int *temp;


void create(void);
void display(void);
void destroy(void);

void bubbleSort(int[], int);
void insertionSort(int[], int);
void selectionSort(int[], int);
void mergeSort(int[], int[], int, int);
void quickSort(int[], int , int);
void countingSort(int[], int);
void maxHeapSort(int[], int);

#endif