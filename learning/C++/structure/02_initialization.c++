// we can initialize a structure when creating it.

#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    float marks;
};



int main(){
    Student s1 = {"Asu", 23, 95.67};

    // or

    // This is modern C++ style
    Student s2 {"Raj", 20, 89.45};


    // Designated Initialization
    Student s3{
        .name = "Rohan",
        .marks = 84.35,
        .age = 17
    };
    
    return 0;
}