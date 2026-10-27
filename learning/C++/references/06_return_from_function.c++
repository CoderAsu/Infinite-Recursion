#include <iostream>
using namespace std;

int& getElement(int arr[], int index){
    return arr[index];
}

int main(){

    int arr[] = {10, 20, 30};

    getElement(arr, 1) = 100;

    cout << arr[1];

    cout << endl;
    return 0;
}