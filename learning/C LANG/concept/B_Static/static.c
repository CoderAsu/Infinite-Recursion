#include <stdio.h>

int increment(){
    static int count;
    // int var1 = 3;
    // static int count = var1;
    count = count + 1;
    return count;
}

int main(){
    int value;
    value = increment();
    value = increment();
    value = increment();

    printf("%d", value);
    return 0;
}

// by the use of static keyword the local variable does not initiates garbage values, it stores 0.

// Always, a static integer variable is assigned with the constant value and not a variable or any function.