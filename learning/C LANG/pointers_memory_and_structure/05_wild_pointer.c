/*
    What is a Wild Pointer?
    Wild pointers are also known as uninitialized pointers.

    These pointers usually point to some arbitary memory location and may cause a program to crash or misbehave.

    Example:
    int main(){
        int *p;
        *p = 10;
        return 0;
    }


    How to avoid wild pointer?
    
    1. Initialize them with the address of a known variable.

    Example:
    int main(){
        int var = 10;
        int *p;
        p = &var;   No more a wild pointer
        return 0;
    }


    2. Explicitly allocate the memory and put the values in the allocated memory.

    Example:
    int main(){
        int *p = (int*)malloc(sizeof(int));
        *p = 10;
        free(p);
        return 0;
    }
*/