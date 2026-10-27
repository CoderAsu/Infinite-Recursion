#include <iostream>
using namespace std;

// pass by value
void change(int x){
    x = 100;
}


// pass by reference
void change2(int& x){
    x = 200;
}


// swap using reference

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 10;
    change(a);

    cout << a << endl;

    change2(a);

    cout << a << endl;



    // swaping

    int x = 45;
    int y = 78;

    swap(x, y);

    cout << x << endl;
    cout << y << endl;

    return 0;
}