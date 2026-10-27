// Rule 1: A reference must be initialized

/* 
    int a = 10;
    int& r = a;  // valid

    int& r;     // invalid

*/






// Rule 2: A reference cannot be reseated

/*
    int a = 10;
    int b = 20;

    int& r = a;
    r = b;

    cout << a;  // 20;

*/





// Rule 3: A reference is not a separate object that you can use like a pointer

/*
    int a = 10;
    int& r = a;

    cout << r;      // 10
    cout << &r;     // address of a
*/




// Rule 4: Reference types must be compatible

/*
    double a = 10;
    int& r = a;     // invalid
*/