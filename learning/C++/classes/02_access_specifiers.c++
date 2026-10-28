// Access specifiers controls which parts of a class can access its members.
// C++ has three access specifiers.
/*
    -> public
    -> private
    -> protected
*/


/*Understanding the three access specifiers
Feature	(Accessible)                    public	        private	        protected
inside the same class	                Yes	            Yes	            Yes
directly from ordinary outside code	    Yes	            No	            No
outside the file                        Yes             No              No
in a derived class	                    Yes	            No*	            Yes
by a declared friend	                Yes	            Yes	            Yes
Default in a class	                    No	            Yes	            No

*A derived class cannot directly access the base class's private members, though it can use public or protected base-class functions that operate on them.
*/


#include <iostream>
using namespace std;

class Student{

    public:
        int age;

};


class Student2{
    private:
        string name;

    public:
        void setName(string n){
            name = n;
        }

        void getName(){
            cout << "Hello, " << name;
        }

    // This is one of the foundations of encapsulation.
};




class Animal{
    protected:
        int age;
};

class Dog : public Animal{
    public:
        void setAge(int a){
            age = a;
        }
};

int main(){

    Student s;
    s.age = 24;

    cout << s.age << endl;



    Student2 s2;
    s2.setName("Jinwoo");
    s2.getName();


    cout << endl;
    return 0;
}