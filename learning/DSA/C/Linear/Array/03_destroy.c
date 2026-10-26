#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void destroy(){
    if(arr == NULL){
        printf("Array does not exist!\n");
        return;
    }

    free(arr);

    arr = NULL;
    size = 0;
    capacity = 0;

    printf("Array destroyed successfully!\n");
}