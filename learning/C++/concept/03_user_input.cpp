// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).


#include <iostream>
using namespace std;

int main(){
    int x, y;
    int sum;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is " << sum << endl;
    return 0;
}
