#include <iostream>
using namespace std;

class ABC {
    public:
        void Display() {
            cout << "Clase padre" << endl;
        }
};

class XYZ : public ABC {
    public:
        void Display() {
            cout << "Clase hija" << endl;
        }
};

int main() {
    XYZ x;
    ABC a;
    x.Display();
    a.Display();
    x.ABC::Display();

    return 0;
}