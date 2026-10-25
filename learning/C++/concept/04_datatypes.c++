
/*
    C++ Data Types

├── 1. Fundamental / Primitive
│   ├── Integer → int, short, long, long long
│   ├── Character → char, wchar_t, char8_t, char16_t, char32_t
│   ├── Floating-point → float, double, long double
│   ├── Boolean → bool
│   └── Void → void
│
├── 2. Derived
│   ├── Array
│   ├── Pointer
│   ├── Reference
│   └── Function
│
├── 3. User-defined
│   ├── struct
│   ├── class
│   ├── union
│   ├── enum
│   └── using / typedef
│
└── 4. Modifiers
    ├── signed
    ├── unsigned
    ├── short
    └── long

*/


/*
    bool -> 1 byte
    char -> 1 byte
    int -> 2 or 4 bytes
    float -> 4 bytes
    double -> 8 bytes
*/



#include <iostream>
using namespace std;

int main(){

    int myNum = 23;
    short int myShortNum = 6;
    long int myLongNum = 5879467674379874L;
    float myFloatNum = 94.45;
    double myDoubleNum = 56.3498794875984;
    long double myLongDoubleNum = 7458.3434983794734;
    char myLetter = 'A';
    string myText = "Asu";
    bool myBoolean = true;


    cout << "I am " << myText << endl;
    cout << "My age is " << myNum << endl;
    cout << "My short number is " << myShortNum << endl;
    cout << "My long Number is " << myLongNum << endl;
    cout << "My fav letter is " << myLetter << endl;
    cout << "I got " << myFloatNum << " marks" << endl;
    cout << "My long double num is " << myLongDoubleNum << endl;
    cout << "Big floating point: " << myDoubleNum << endl;
    cout << "Adult: " << myBoolean << endl << endl;


    // The auto keyword automatically detects the type of a variable based on the value you assign to it.


    auto x = 5;
    x = 10;
    // x = 9.99; can't assign a double to an int

    cout << x << endl;
    return 0;
}