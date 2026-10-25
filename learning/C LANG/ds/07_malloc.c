/*
    What is malloc()?
    malloc is a built-in function declared in the header file <stdlib.h>.

    malloc is the short name for "memory allocation" and is used to dynamically allocate a single large block of contiguous memory according to the size specified.

    Syntax: (void*)malloc(size_t size)

    malloc function simply allocates a memory block according to the size specified in the heap and on success it returns a pointer pointing to the first byte of the allocated memory else returns NULL.

    size_t is defined in <stdlib.h> as usigned int.




    Why void pointer?
    
    malloc doesn't have an idea of what it is pointing to.

    It merely allocates memory requested by the user without knowing the type of data to be stored inside the memory.

    The void pointer can be typecasted to an appropriate type.

            int *ptr = (int*)malloc(4)

    malloc allocates 4 bytes of memory in the heap and the address of the first byte is stored in the pointer ptr

*/



#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Memory not available.");
        exit(1);
    }
    
    for(i = 0; i < n; i++){
        printf("Enter an integer: ");
        scanf(" %d", ptr + i);
    }

    printf("\n");
    
    for(i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    return 0;
}