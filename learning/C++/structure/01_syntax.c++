// To create a structure, use the struct keyword and declare each of its member inside curly braces.

#include <iostream>
using namespace std;

// Anonumous Structure
struct {
    int myNum;
    string myString;
} myStructure;




// Define structue, then create variables
struct Data{
    string name;
    int age;
    float marks;
};



// create variables immediately

struct Student{
    string name;
} std1, std2;


// using typedef

typedef struct Car{
    string name;
} car;

int main(){
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl << endl;



    Data data1;
    data1.name = "Asu";
    data1.age = 23;
    data1.marks = 98.23;

    cout << "Name: " << data1.name << endl << "Age: " << data1.age << endl << "Marks: " << data1.marks << endl << endl;



    std1.name = "Mac";
    cout << std1.name << endl << endl;


    car car1{"Ferrari"};
    cout << car1.name << endl << endl;

    return 0;
}