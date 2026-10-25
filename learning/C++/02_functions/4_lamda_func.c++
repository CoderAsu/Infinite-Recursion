#include <iostream>
#include <functional>
using namespace std;




// lambda functions
// C++ supports lamda expressions, which are anonymnous functions.
// A lambda function is a small, anonymous function you can write directly in your code. It's useful when you need a quick function without naming it or declaring it separately.

// syntax
// [capture] (parameters) { code };

auto greet = [](){
    cout << "Hello";
};


// lambda function with parameters

auto sub = [](int a, int b){
    return a - b;
};



// Passing lambdas to functions

void myFunction(function<void()> func) {
  func();
  cout << endl;
  func();
}

int main(){
    

    greet();

    cout << endl;

    cout << sub(7, 5) << endl << endl;

    myFunction(greet);

    cout << endl << endl;



    // Using Lambdas in Loops

    for (int i = 1; i <= 3; i++) {
        auto show = [i]() {
            cout << "Number: " << i << "\n";
        };
        show();
    }
    
    return 0;
}

