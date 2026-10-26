#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include "create.c"
#include "display.c"
#include "destroy.c"
#include "01_bubbleSort.c"
#include "02_insertionSort.c"
#include "03_selectionSort.c"
#include "04_mergeSort.c"
#include "05_quickSort.c"
#include "06_countingSort.c"
#include "07_maxHeapSort.c"


int main(void){
    int choice;

    do{

        printf("\n========= ARRAY SORTING ALGORITHMS =========\n");
        printf("1. Create\n");
        printf("2. Bubble Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Selection Sort\n");
        printf("5. Merge Sort\n");
        printf("6. Quick Sort\n");
        printf("7. Counting Sort\n");
        printf("8. MaxHeap Sort\n");
        printf("0. Exit\n");
        printf("=============================================\n\n");

        printf("Enter your choice: ");
        if(scanf("%d", &choice) != 1){
            printf("Invalid choice!\n");
            while(getchar() != '\n' && !feof(stdin)){}
            continue;
        }

        switch(choice){
            case 1:
                destroy();
                create();
                break;
            case 2: case 3: case 4: case 5: case 6: case 7: case 8:
                if(arr == NULL){
                    printf("Create an array first!\n");
                    break;
                }
                if(choice == 2) bubbleSort(arr, size);
                else if(choice == 3) insertionSort(arr, size);
                else if(choice == 4) selectionSort(arr, size);
                else if(choice == 5) mergeSort(arr, temp, 0, size - 1);
                else if(choice == 6) quickSort(arr, 0, size - 1);
                else if(choice == 7) countingSort(arr, size);
                else if(choice == 8) maxHeapSort(arr, size);

                display();
                destroy();
                printf("Create a new array for another operation.\n");
                break;
            case 0:
                printf("Exiting Program...\n");
                destroy();
                break;
            default:
                printf("Invalid choice!\n");
                destroy();
        }

    } while(choice != 0);

    destroy();
    return 0;
}