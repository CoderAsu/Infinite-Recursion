// One of the most important differences from C is function overloading.
// C does not support function overloading but C++ does. 

#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

float add(float a, float b){
    return a + b;
}


// constexpr functions
// This allows the function to potentially be evaluated at compile time.

constexpr int square(int x){
    return x * x;
}


// auto return type

auto multiply(int a, int b) {
    return a * b;
}


// default arguments

void display(int x = 10){
    cout << x;
}

// default arguments should generally be provided from right to left.

int main(){

    cout << add(5, 6) << endl;
    cout << add(7.9f, 2.7f) << endl;
    cout << add(5, 5, 10) << endl;

    cout << endl;

    cout << square(5) << endl << endl;

    cout << multiply(9, 8) << endl << "\n";


    display();

    cout << endl;

    return 0;
}