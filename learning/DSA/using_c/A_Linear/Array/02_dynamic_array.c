#include <stdio.h>
#include <stdlib.h>

int *arr;
int size = 0;

// functions:

void create();
void display();
void insertAtBeg();
void insertAtEnd();
void insertAtPos();
void deleteAtBeg();
void deleteAtEnd();
void deleteAtPos();
void update();
void destroy();

void count();
void sort();
void search();
void reverse();

void minimum();
void maximum();

void sum();
void average();


int main()
{
    int choice;

    while (1)
    {
        printf("\n========== ARRAY MENU ==========\n");

        printf("1.  Create\n");
        printf("2.  Display\n");
        printf("3.  Insert at Position\n");
        printf("4.  Delete at Position\n");
        printf("5.  Insert at Beginning\n");
        printf("6.  Insert at End\n");
        printf("7.  Delete at Beginning\n");
        printf("8.  Delete at End\n");
        printf("9.  Search\n");
        printf("10. Update\n");
        printf("11. Reverse\n");
        printf("12. Sort\n");
        printf("13. Maximum\n");
        printf("14. Minimum\n");
        printf("15. Sum\n");
        printf("16. Average\n");
        printf("17. Destroy\n");
        printf("18. Count\n");
        printf("19. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                insertAtPos();
                break;

            case 4:
                deleteAtPos();
                break;

            case 5:
                insertAtBeg();
                break;

            case 6:
                insertAtEnd();
                break;

            case 7:
                deleteAtBeg();
                break;

            case 8:
                deleteAtEnd();
                break;

            case 9:
                search();
                break;

            case 10:
                update();
                break;

            case 11:
                reverse();
                break;

            case 12:
                sort();
                break;

            case 13:
                maximum();
                break;

            case 14:
                minimum();
                break;

            case 15:
                sum();
                break;

            case 16:
                average();
                break;

            case 17:
                destroy();
                break;

            case 18:
                count();
                break;

            case 19:
                printf("Exiting Program...");
                free(arr);

                printf("\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    printf("\n");
    return 0;
}

void create(){
    if(arr != NULL){
        printf("Array already exist!\n");
        return;
    }

    printf("Enter size of the array: ");
    scanf("%d", &size);

    if(size <= 0){
        printf("Invalid size!\n");
        return;
    }

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL){
        printf("Memory Allocation Failed!\n");
        return;
    }

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array created sucessfully!\n");
}

void display(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    printf("Array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void insertAtBeg(){
    int value;

    if(arr == NULL || size == 0){
        printf("Create an array first!\n");
        return;
    }

    int *temp = (int *)realloc(arr, (size+1) * sizeof(int));

    if(temp == NULL){
        printf("Memory Reallocation Failed!");
        return;
    }

    arr = temp;

    printf("Enter data to insert: ");
    scanf("%d", &value);

    for(int i = size; i > 0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = value;

    size++;

    printf("Element inserted at beginning sucessfully!\n");
}


void insertAtEnd(){
    int value;

    if(arr == NULL || size == 0){
        printf("Create an array first!\n");
        return;
    }

    int *temp = (int *)realloc(arr, (size+1) * sizeof(int));

    if(temp == NULL){
        printf("Memory Reallocation Failed!");
        return;
    }

    arr = temp;

    printf("Enter data to insert: ");
    scanf("%d", &value);
    

    arr[size] = value;

    size++;

    printf("Element inserted at end sucessfully!\n");
}


void insertAtPos(){
    int pos, value;

    if(arr == NULL || size == 0){
        printf("Create an array first!\n");
        return;
    }

    printf("Enter Position[1-%d]: ", size+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > size + 1){
        printf("Invalid position!\n");
        return;
    }

    if(pos == 1){
        insertAtBeg();
        return;
    }

    printf("Enter data to insert: ");
    scanf("%d", &value);

    int *temp = (int *)realloc(arr, (size+1) * sizeof(int));

    for(int i = size; i > pos - 1; i--){
        arr[i] = arr[i-1];
    }

    arr[pos - 1] = value;

    size++;

    printf("%d inserted at position %d\n", value, pos);
}

void deleteAtBeg(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    for(int i = 0; i < size; i++){
        arr[i] = arr[i+1];
    }

    size--;

    if(size == 0){
        free(arr);
        arr = 0;
        size = 0;
    } else {
        int *temp = (int *)realloc(arr, size * sizeof(int));

        if(temp == NULL){
            printf("Memory Reallocation Failed!\n");
            return;
        } else{
            arr = temp;
        }
    }

    printf("Element deleted sucessfully from beginning!\n");
}

void deleteAtEnd(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    size--;

    if(size == 0){
        free(arr);
        arr = 0;
        size = 0;
    } else {
        int *temp = (int *)realloc(arr, size * sizeof(int));

        if(temp == NULL){
            printf("Memory Reallocation Failed!\n");
            return;
        } else{
            arr = temp;
        }
    }

    printf("Element deleted sucessfully from end!\n");
}

void deleteAtPos(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int pos;

    printf("Enter position[1-%d]: ", size);
    scanf("%d", &pos);

    if(pos < 1 || pos > size){
        printf("Invalid position!\n");
        return;
    }

    if(pos == 1){
        deleteAtBeg();
        return;
    }

    for(int i = pos -1; i < size - 1; i++){
        arr[i] = arr[i+1];
    }

    size--;

    if(size == 0){
        free(arr);
        arr = 0;
        size = 0;
    } else {
        int *temp = (int *)realloc(arr, size * sizeof(int));

        if(temp == NULL){
            printf("Memory Reallocation Failed!\n");
            return;
        } else{
            printf("Element deleted from position %d\n", pos);
            arr = temp;
        }
    }

}

void update(){
    int pos, value;

    if(arr == NULL || size == 0){
        printf("Create an array first!\n");
        return;
    }

    printf("Enter position[1-%d]: ", size);
    scanf("%d", &pos);

    if(pos < 1 && pos > size){
        printf("Invalid Position!\n");
        return;
    }

    printf("Enter data to insert: ");
    scanf("%d", &value);

    arr[pos - 1] = value;

    printf("Element updated sucessfully!\n");
}

void destroy(){
    free(arr);
    arr = 0;
    size = 0;

    printf("Memory freed sucessfully!\n");
}

void search(){
    int target;
    int found = 0;

    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    printf("Enter value to search: ");
    scanf("%d", &target);

    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            printf("Element found at position %d", i+1);
            found = 1;
        }
    }

    if(found == 0){
        printf("Element not found!\n");
    }

}

void sort(){

    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int i, j, temp;

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array sorted sucessfully!\n");
}

void reverse(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int low = 0;
    int high = size - 1;
    int temp;

    while(low < high){
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }

    printf("Array reversed sucessfully!\n");
}

void minimum(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int min = arr[0];
    
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Minimum value is %d", min);
}

void maximum(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int max = arr[0];
    
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Maximum value is %d", max);
}

void sum(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int total = 0;

    for(int i = 0; i < size; i++){
        total += arr[i];
    }

    printf("Sum is %d", total);
}

void average(){
    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    int total = 0;

    for(int i = 0; i < size; i++){
        total += arr[i];
    }

    printf("Average is %d", total/size);
}

void count(){
    int count = 0;

    if(arr == NULL || size == 0){
        printf("Array is empty!\n");
        return;
    }

    for(int i = 0; i < size; i++){
        count++;
    }

    if(count == 1){
        printf("Total element is %d\n", count);
    } else{
        printf("Total elements are %d\n", count);
    }
}