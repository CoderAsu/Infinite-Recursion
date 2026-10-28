// A class is a user-defined data type that groups data members and member functions into a single unit.

/*
    -> Data members: Variables declared inside a class.
    -> Memeber functions: Functions declared inside a class that define its behavior.
*/


// An object is an instance of a class. It is a variable of that class type through which you can access its accessible members.




#include <iostream>
#include <string>
using namespace std;


class Student {

    // By default members and functions are private.

    public:
        string name;
        int age;

        void display(){
            cout << name << " " << age << endl;
        }
};


int main(){
    Student s1, s2;     // object creation

    s1.name = "Asu";
    s1.age = 24;

    s2.name = "Jinwoo Sung";
    s2.age = 23;

    s1.display();
    s2.display();

    return 0;
}