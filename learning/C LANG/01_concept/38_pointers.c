/*
    Pointer is a special variable that is capable of storing some address.
    It points to a memory location where the first byte is stored.
*/


/*
    General syntax for declaring pointer variables:
        data_type *pointer_name

    Here datatype refers to the type of the value that the pointer will point to.






    There are two ways to declare pointer variables in C:

    int* myNum;
    int *myNum;





    Need of address of operator
    -> Simply declaring a pointer is not enough.
    -> It is important to initialize pointer before use.
    -> One way to initialize a pointer is to assign address of some variable.

    int x = 6;
    int *ptr;
    ptr = &x;

    or we can also write all these lines one single line.

    int x = 5, *ptr = &x;
*/



/*
    Value of Operator

    value of operator/ indirection operator/ dereference operator is an operator that is used to access the value stored of the location pointed by the pointer.

    We can also change the value of the object pointed by the pointer.


    A word of caution
    Never apply the indirection operator to the uninitialized pointer

    for example:
    int *ptr;
    printf("%d", *ptr);

    Output:
    Undefined behaviour


    Assigning value to an uninitialized pointer is dangerous.
    int *ptr;
    *ptr = 20;

    Output:
    Segmentation Fault

    Usually, segmentation fault is caused by program trying to read or write an illegal memory location.
*/



/*
    Note that the * sign can be confusing here, as it does two different things in our code:
    -> When used in declaration (int* ptr), it creates a pointer variable.
    -> When not used in declaration, it act as a dereference operator.
*/

#include <stdio.h>
int main(){

    int myAge = 23;

    int *ptr = &myAge;

    printf("%d\n", myAge);
    printf("%p\n", &myAge);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%lu", sizeof(ptr));

    printf("\n");

    return 0;
}




/*

Question 1: Consider the following two statements
    int *p = &i;
    p = &i;

First statement is the declaration and second is simple assignment statement. Why isn't in second statement, p is preceded by * symbol?


Solution: In C, *symbol has different meanings depending on the context in which it's used.

At the time of declaration, * symbol is not acting as an indirection operator. * symbol in the first statement tells the compiler that p is a pointer to an integer. But, if we write *p = &i then it is wrong, because here * symbol indicates the indirection operator and we cannot assign the address to some integer variable. Therefore, in the second statement, there is no need of * symbol in front of p. It simply means we are assigning the address to a pointer.





Question 2: What is the output of the following program 

void fun(const int *p){
    *p = 0;
}

int main(){
    const int i = 10;
    fun(&i);
    return 0;
}


Output:
Error: Assignment of read-only location *p





Question 3: If i is a variable and p points to i, which of the following expressions are aliases of i?

a) *p       b) *&p      c) &p   d) *i       e)*&i


Solution: Options (a) and (e) are the aliases of variable i

Example:
int i = 10;
int *p = &i;

a) *p = *(1000) = 10
b) *&p = *(&p) = *(2000) = 1000
c) &p = 2000
d) *i = *(10) doesn't make sense
e) *&i = 8(&i) = *(1000) = 10
*/