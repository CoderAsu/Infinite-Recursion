/*
    What is calloc()?
    
    calloc() function is used to dynamically allocate multiple blocks of memory.

    It is different from malloc in two ways:

    -> calloc() needs two arguments instead of just one

    Syntax: void *calloc(size_t n, size_t size);    calloc(number of block, size of each block)

    Example:

        int *ptr = (int *)calloc(10, sizeof(int));

        An equivalent malloc call:

        int *ptr = (int *)malloc(10*sizeof(int));


    -> Memory allocated by calloc is initialized to zero. It is not the case with malloc. Memory allocated by malloc is initialized with some garbage value

    Note:
    malloc and calloc both return NULL when sufficient memory is not available in the heap.

    calloc stands for clear allocation
    malloc stands for memory allocation
*/