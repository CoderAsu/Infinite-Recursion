#include <iostream>
using namespace std;

class Student {
    public:
        int& marks;

        Student(int& m) : marks(m) {}
};

int main(){

    int score = 90;

    Student s(score);

    s.marks = 95;

    cout << score << endl;

    return 0;
}