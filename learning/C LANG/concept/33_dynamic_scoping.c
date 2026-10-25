/*
    What is Dynamic Scoping?

    In dynamic scoping, definition of a variable is resolved by searching its containing block and if not found, then searching its calling function and if still not found then the function which called that calling function will be searched and so on.


    Example:

    int fun1(int);
    int fun2(int);

    int a = 5;

    int main()
    {

        int a = 10;
        a = fun1(a);
        printf("%d", a);

        return 0;
    }

    int fun1(int b)
    {
        b = b + 10;
        b = fun2(b);

        return b;
    }

    int fun2(int b)
    {
        int c;
        c = a + b;

        return c;
    }

    Output: 30

*/



/*

    Important Takeaways
    -> In most of the programming languages, static scoping is followed instead of dynamic scoping.
    -> Languages, including Algol, Pascal, C, Haskell, Scheme etc. are statically scoped.
    -> Some languages, including SNOBOL, APL, Lisp etc. are dynamically scoped.
    -> As C follows static scoping therefore it is not possible to see programmatically, how dynamic scoping works in C.

*/