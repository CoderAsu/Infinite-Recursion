// Strings are used for storing text/characters.

// A string variable contains a collection of characters surrounded by double quotes ("").

#include <iostream>
#include <string>
using namespace std;

int main(){

    string greeting = "Hello";
    cout << greeting << " World!" << endl;

    // concat

    string firstName = "Laxmi ";
    string middleName = "Narayan ";
    string lastName = "Maharana";

    string fullName = firstName + middleName + lastName;
    cout << fullName << endl;


    string fname = "Subham ";
    string lname = "Padhy";

    string fullname = fname.append(lname);

    cout << fullname << endl;


    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl;

    // both length() and size() works same



    // access string
    cout << greeting[0] << endl;
    cout << greeting[greeting.length() - 1] << endl;

    greeting[0] = 'J';

    cout << greeting << endl;



    // User Input Strings

    string name;
    cout << "Type your first name: ";
    cin >> name;
    cout << "Your name is " << name << endl;

    cin.ignore(); 

    string desc;
    cout << "Write some description: ";
    getline (cin, desc);
    cout << desc << endl;
    return 0;
}