// HERENCIA MULTIPLE
#include <iostream>
using namespace std;

class Liquid {
    public:
        void display1() {
            cout << "Liquid Class" << endl;
        }
};

class Fuel {
    public:
        void display2() {
            cout << "Fuel Class" << endl;
        }
};

class Petrol : public Liquid, public Fuel {
    public:
        void display3() {
            cout << "Petrol Class" << endl;
        }  
};


int main() {
    Petrol P1;
    P1.display1();
    P1.display2();
    P1.display3();
    Liquid L1;
    L1.display1();
    Fuel F1;
    F1.display2();
    return 0;
}