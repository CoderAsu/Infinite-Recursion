// Assigning string literal to a pointer

/*
    char *ptr = "Hello World!"

    Recall: writing string literal is equivalent to writing the pointer to the first character of the string literal.

    Ptr contains the address of the first character of the string literal.

    char *ptr = "Hello"

    As writing "Hello" is equivalent to writing the pointer to the first character. Therefore, we can subscript it to get some character of the string literal.

    "Hello"[1] is equivalent to pointer to 'H'[1]

    pointer to 'H'[1] = *(pointer to 'H' + 1)
    pointer to 'H'[1] = *(1000 + 1) = *(1001) = 'e'
    similarly,
    "Hello"[0] = 'H'
    "Hello"[2] = 'l'
    "Hello"[3] = 'l'
    "Hello"[4] = '0'

    Point to be Noted: String literal can't be modified. It causes undefined behaviour.
    char *ptr = "Hello";
    *ptr = 'M'; // can't be possible

    String literals are also knowns as string constants. They have been allocated a read only memory. So we can't alter them.
    But character pointer itself has been allocated read-write memory. So the same pointer can point to some other string literal.
*/