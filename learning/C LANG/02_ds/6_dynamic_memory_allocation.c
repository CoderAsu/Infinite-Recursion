/*
    Static Memory Allocation
    Memory allcoated during compile time is called static memory.
    The memory allocated is fixed and cannot be increased or decreased during run time.

    Example:
    int main(){
        int arr[5] = {1, 2, 3, 4, 5};
        return 0;
    }


    Problems faced in static memory allocation 

    1. If you are allocating memory for an array during compile time then you have to fix the size at the time of declaration. Size is fixed and user cannot increase or decrease the size of the array at run time.

    2. If the values stored by the user in the array at run time is less than the size specified then there will be wastage of memory.

    3. If the values stored by the user in the array at run time is more than the size specified then the program may crash or misbehave.

*/


/*
    Dynamic Memory Allocation
    The process of allocating memory at the time of execution is called dynamic memory allocation.

    Heap is the segment of memory where dynamic memory allocation takes place.

    Unlike stack where memory is allocated or deallocated in a defined order, heap is an area of memory is allocated or deallocated without any order or randomly.

    There are certain built-in functions that can help in allocating or deallocating some memory space at run time.

*/



/*

    POINTERS PLAY AN IMPORTANT ROLE IN DYNAMIC MEMORY ALLOCATION. ALLOCATED MEMORY CAN ONLY BE ACCESSED THROUGH POINTERS.

    Built in functions:
    -> malloc()
    -> calloc()
    -> realloc()
    -> free()

*/



/*
Difference Between Stack and Heap
    
Property	    Stack	                                Heap
Usage	        Function calls, local variables	        Dynamic memory allocation
Allocation	    Automatic by compiler	                Manual using malloc, calloc, etc.
Speed	        Very fast	                            Slower
Memory Size	    Limited (usually ~1MB)	                Larger (depends on system memory)
Lifetime	    Ends when function exits	            Persists until you call free()
Storage Style	LIFO (Last In, First Out)	            Randomly managed
*/