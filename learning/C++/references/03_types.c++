// 1. Lvalue reference (T&)

/*
    int a = 10;
    int& r = a;
*/




// 2. Const lvalue reference (const T&)

/*
    int a = 10;
    const int& r = a;

    r = 20;     // error


    // const reference can also bind to a temporary value:

    const int& r = 100;
    cout << r;  // 100
*/



// 3. Rvalue reference (T&&)

/*
    int&& r = 10;
    cout << r;  // 10
*/