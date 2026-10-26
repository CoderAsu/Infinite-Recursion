#include <stdio.h>
#include "linked_list.h"
#include "01_create.c"
#include "02_display.c"
#include "03_destroy.c"
#include "04_insert.c"
#include "05_delete.c"
#include "06_search.c"
#include "07_sort.c"
#include "08_reverse.c"

int main(void) {
    int choice;
    do {
        printf("\n========= LINKED LIST OPERATIONS =========\n");
        printf("1. Create\n2. Display\n3. Destroy\n");
        printf("4. Insert at Beginning\n5. Insert at End\n6. Insert at Position\n");
        printf("7. Delete at Beginning\n8. Delete at End\n9. Delete at Position\n");
        printf("10. Search\n11. Sort\n12. Reverse\n0. Exit\n");
        printf("==========================================\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            break;
        }

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: destroy(); break;
            case 4: insertAtBeginning(); break;
            case 5: insertAtEnd(); break;
            case 6: insertAtPosition(); break;
            case 7: deleteAtBeginning(); break;
            case 8: deleteAtEnd(); break;
            case 9: deleteAtPosition(); break;
            case 10: search(); break;
            case 11: sort(); break;
            case 12: reverse(); break;
            case 0: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    if (head != NULL) destroy();
    return 0;
}
