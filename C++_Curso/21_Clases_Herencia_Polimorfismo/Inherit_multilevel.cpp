// HERENCIA MULTINIVEL
#include <iostream>
using namespace std;

class Person {
    public:
        void display1() {
            cout << "Person class " << endl;
        }
};

class Student : public Person {
    public:
        void display2() {
            cout << "Student class " << endl;
        }
};

class CsStudent : public Student {
    public:
        void display3() {
            cout << "CsStudent class" << endl;
        }
};


int main() {
    CsStudent C1;
    C1.display1();
    C1.display2();
    C1.display3();
    return 0;
}