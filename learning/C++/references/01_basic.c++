// A reference is an alias (another name) for an existing variable.

// References are especially useful for passing arguments to functions, modifying original variables, avoiding unnecessary copies, and working with objects efficiently.


// Basic Syntax:
// data_types& reference_name = existing_variable;

#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int& ref = a;

    cout << a << endl;
    cout << ref << endl;

    ref = 20;
    
    cout << a << endl;

    return 0;
}


