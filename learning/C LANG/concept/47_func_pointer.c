/*
    Function Pointer

    Function pointer are like normal pointers but they have the capability to point a function.

    How to declare a pointer to a function?

    int add(int a, int b){
        return a+b;
    }

    int main(){
        int (*ptr)(int, int);
    }

    Here ptr is a pointer which is pointing to a function containing two integer arguments and it returns an integer.

    Assigning the address of a function to a function pointer.

    int main(){
        int (*ptr)(int, int);
        ptr = &add;
        result = *ptr(10, 20);
        printf("%d", result);
    }

    or

    int main(){
        int result;
        int (*ptr)(int, int) = add;
        result = ptr(10, 20);
        printf("%d", result);
    }
*/