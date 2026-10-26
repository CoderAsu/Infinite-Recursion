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
        printf("\n===== CIRCULAR LINKED LIST =====\n");
        printf("1. Create\n2. Display\n3. Destroy\n");
        printf("4. Insert at beginning\n5. Insert at end\n6. Insert at position\n");
        printf("7. Delete at beginning\n8. Delete at end\n9. Delete at position\n");
        printf("10. Search\n11. Sort\n12. Reverse\n0. Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) break;
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
            case 0: break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);
    if (head != NULL) destroy();
    return 0;
}
