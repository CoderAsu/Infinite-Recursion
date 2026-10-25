/*
    An enumerated type is a user defined type which is used to assign names to integral constants because names are easier to handle in program
*/

#include <stdio.h>

enum Bool {false, true};

int main(){
    enum Bool var;
    var = true;
    printf("%d", var);
    return 0;
}

/*
    Hey! but we can also use #define to assign names to integral constants. Then, why do we even need enum?

    Need of Enumeration

    Two important reasons:
    1) Enums can be declared in the local scope
    2) Enum names are automatically initialized by the compiler


    Reason #1: Enums can be declared in the local scope.

    int main(){
        enum Bool {false, true} var;
        var = true;
        printf("%d", var);
        return 0;
    }

    This enum is not visible outside this main function.



    Reason #2: Enum names are automatically initialized by the compiler

    int main(){
        enum Bool {false, true} var;
        var = true;
        printf("%d", var);

        return 0;
    }

    False is initialized to 0 and True to 1.
*/



/*
    Some Important Facts

    Fact #1: Two or more names can have same value.

    int main(){
        enum point {x = 0, y = 0, z = 0};
        printf("%d %d %d", x, y, z);
        return 0;
    }

    Output:
    0 0 0




    Fact #2: We can assign values in any order. All unassigned names will get value of previous name + 1.

    int main(){
        enum point {y = 2, x = 34, t, z = 0};
        printf("%d %d %d", x, y, z, t);
        return 0;       
    }

    Output:
    34 2 0 35





    Fact #3: Only integral values are allowed

    int main(){
        enum point {y = 2.5, x = 34, z = 0};
        printf("%d %d %d", x, y, z);
        return 0;
    }

    Output:
    Error: Enumerator value for 'y' is not an integer constant




    Fact #4: All enum constant must be unique in their scope.

    int main(){ 
        enum point1 {x = 34, y = 2, z = 0};
        enum point2 {x = 4, p = 25, q = 1};
        printf("%d %d %d %d")
        return 0;
    }

    Output:
    Error: Redeclaration of enumerator 'x'
*/