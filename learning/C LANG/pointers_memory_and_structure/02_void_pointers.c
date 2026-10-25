/*
    What is a void pointer?
    Void pointer is a pointer which has no associated data type with it. It can point to any data of any data type and can be typecasted to any type.

    Warning!
    We cannot dereference a void pointer.

    

    Use of void pointer
    malloc and calloc function returns a void pointer. Due to this reason, they can allocate a memory for any type of data.

*/


#include <stdio.h>

int main(){
    int n = 10;
    
    void *ptr = &n;

    printf("%d", *(int*)ptr); //Output: 10
    // printf("%d", *ptr); 
    return 0;
}