#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

void destroy(void){
    free(arr);
    free(temp);
    arr = NULL;
    temp = NULL;
    size = 0;
}
