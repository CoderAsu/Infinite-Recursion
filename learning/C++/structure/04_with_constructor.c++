// C++ can have constructors.

#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    float marks;

    // Default Constructor
    Student(){
        name = "Unknown";
        age = 0;
        marks = 0;
    }

    // with parameters
    Student(string n, int a){
        name = n;
        age = a;
    }


    // Better modern C++ style

    Student(string n, int a, float m) : name(n), age(a), marks(m) {}


    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl << endl;
    }
};



int main(){
    Student s1;
    Student s2("Asu", 23);
    Student s3("Ayush", 19, 89.34);


    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}