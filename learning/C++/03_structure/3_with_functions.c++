// This is where C++ structures become much more powerful than basic C structures.

// A C++ structure can contain member functions.

#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl << endl;
    }
};



// Functions Outside the Structure

struct Student2{
    string name;
    int age;

    void display();
};


void Student2::display(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl << endl;
}

int main(){

    Student s1;
    s1.name = "Asu";
    s1.age = 23;

    s1.display();


    Student2 s2;
    s2.name = "Lumine";
    s2.age = 13;

    s2.display();

    return 0;
}