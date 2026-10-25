#include <stdio.h>

int main() {
    register int counter = 0;
    for (int i = 0; i < 100; i++) {
        counter += i;
    }
    printf("Sum: %d\n", counter);
    return 0;
}



/* 
    Increasing order of access time ratio

    Register Memory -> Cache Memory -> Main Memory -> Magnetic Disks -> Magnetic Tapes
*/

/*
    Declares a variable that should be stored in a CPU register instead of RAM (if possible).

    Registers are faster to access than memory, so this is a hint to the compiler for optimization.

    

    register = request to store variable in CPU register for speed.

    Cannot take its address (&).

    Only for local variables.

    Modern compilers usually ignore it, but it’s useful historically for performance hints.
*/