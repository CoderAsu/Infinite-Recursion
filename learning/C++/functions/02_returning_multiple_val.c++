// A normal function can return one object, but that object can contain multiple values.

#include <iostream>
#include <utility> // for pair
#include <tuple> // for multiple diff values
using namespace std;

pair<int, int> calculate(int a, int b){
    return {a+b, a*b};
}

tuple<int, int, int, int> calculate2(int a, int b){
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;

    return {sum, difference, product, division};
}

int main(){

    auto result = calculate(10, 20);
    
    cout << result.first << endl;
    cout << result.second << endl << endl;






    auto result2 = calculate2(10, 5);

    cout << get<0>(result2) << endl;
    cout << get<1>(result2) << endl;
    cout << get<2>(result2) << endl;
    cout << get<3>(result2) << endl << endl;






    // use structured binding

    auto [sum, sub, mul, div] = calculate2(50, 10);

    cout << sum << endl;
    cout << sub << endl;
    cout << mul << endl;
    cout << div << endl;

    return 0;
}