#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {10, 20, 30, 40, 50};

    // 1. size() -> returns the number of elements in the array
    cout << "Size: " << arr.size() << endl;



    // 2. at() -> accesses an element using its index

    cout << "At = " << arr.at(2) << endl;



    // 3. operator[] -> accesses an element directly by index.

    cout << "Index 2 is " << arr[2] << endl;



    // 4. front() -> returns a reference to the first element

    cout << "front element: " << arr.front() << endl;



    // 5. back() -> returns a reference to the last element

    cout << "last element: " << arr.back() << endl;



    // 6. empty() -> checks whether the array contains zero elements

    cout << boolalpha;

    cout << "Is empty: " << arr.empty() << endl; 



    // 7. fill() -> assigns the same value to every element

    arr.fill(0);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;


    // 8. swap() -> swaps the contents of two arrays of the same type and size

    array <int, 3> arr1 = {1, 2, 3};
    array <int, 3> arr2 = {4, 5, 6};

    arr1.swap(arr2);

    for(int i = 0; i < arr1.size(); i++){
        cout << arr1[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < arr2.size(); i++){
        cout << arr2[i] << " ";
    }

    cout << endl;


    arr = {10, 20, 30, 40, 50};



    // 9. begin() -> returns an iterator to the first element

    cout << *arr.begin() << endl;


    // 10. end() -> returns an iterator one position past the last element

    cout << *(arr.end() - 1) << endl;


    // 11. rbegin() -> returns a reverse iterator to the last element

    cout << *arr.rbegin() << endl;

    // 12. rend() -> 

    cout << endl;
    return 0;
}