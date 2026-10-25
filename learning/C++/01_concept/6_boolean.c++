// A boolean variable is declared with the bool keyword and can take the values true or false

#include <iostream>
using namespace std;

int main(){
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << isCodingFun << "\n"; 
    cout << isFishTasty << "\n" << endl;



    // If you prefer to print true and false as words instead of 1 and 0, you can use the boolalpha manipulator.

    cout << boolalpha;

    cout << isCodingFun << "\n"; 
    cout << isFishTasty << "\n" << endl;



    // f you want to go back to the default behavior (printing 1 and 0), you can use noboolalpha

    cout << noboolalpha;
    cout << isCodingFun << "\n"; 
    cout << isFishTasty << "\n";


    return 0;
}