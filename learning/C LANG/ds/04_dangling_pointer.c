/*
    What is a Dangling Pointer?
    A dangling pointer is a pointer which points to some non-existing memory location. 

    Example:
    int main(){
        int *ptr = (int*)malloc(sizeof(int));
        ...
        ...
        free(ptr);  Memory is now released.

        return 0;
    }


    Memory is released meaning deallocating the memory but the pointer is still pointing to the deallcated memory.

    Let's assume that the address of the first byte of memory is 1000, ptr still contains that address(1000) even after deallocating the memory. Because we haven't reinitialized the pointer. As simple as that after releasing the memory ptr is still containing the address that's why ptr is called dangling pointer.   

    When you free the memory after that pointer becomes dangling because it is pointing to the non-existing memory location. After deallocating the memory the memory doesn't exist. Pointer is still pointing to that memory.

    What's the solution?

    int main(){
        int *ptr = (int*)malloc(sizeof(int));
        ...
        ...
        free(ptr);  Memory is now released.
        ptr = NULL; ptr is reinitialized to null now, ptr is no more dangling.
        return 0;
    }
*/

#include <stdio.h>
int* fun(){
    int num = 10;   
    return &num;
}

int main(){
    int *ptr = NULL;
    ptr = fun();
    printf("%d", *ptr);
    return 0;
}

// Output: Segmentation fault