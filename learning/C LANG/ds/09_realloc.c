/*
    What is realloc?
    realloc() function is used to change the size of the memory block without losing the old data.

    Syntax:     void *realloc(void *ptr, size_t newSize)    realloc(pointer to the previously allocated memory, new size)

    On failure, realloc returns NULL.

    Example:
    int *ptr = (int*)malloc(sizeof(int));
    ptr = (int*)realloc(ptr, 2*sizeof(int));

    -> This will allocate memory space of 2*sizeof(int).
    -> Also, this function moves the contents of the old back to a new block and the data of the old block is not lost.
    -> We may lose the data when the new size is smaller than the old size.
    -> Newly allocated bytes are uninitialized.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *ptr = (int*)malloc(2*sizeof(int));

    if(ptr == NULL){
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter the two numbers: \n");

    for(i = 0; i< 2; i++)
        scanf("%d", ptr + i);

    ptr = (int*)realloc(ptr, 4*sizeof(int));

    if(ptr == NULL){
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter 2 more integers: \n");

    for(i = 2; i < 4; i++)
        scanf("%d", ptr + i);

    for(i = 0; i < 4; i++)
        printf("%d ", *(ptr + i));
        
    return 0;
}