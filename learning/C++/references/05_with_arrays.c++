#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[3] = {10, 20, 30};
    int (&ref)[3] = arr;

    ref[0] = 100;

    cout << arr[0] << endl;



    vector<int> vec = {40, 50, 60};

    for(int& x: vec){
        x *= 2;
    }

    for(int x: vec){
        cout << x << " ";
    }


    cout << endl;
    return 0;
}