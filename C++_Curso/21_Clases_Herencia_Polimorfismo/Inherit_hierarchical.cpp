// HERENCIA JERARQUICA
// Si una o mas clases derivan de una clase es llamada Jerarquica
#include <iostream>
using namespace std;

class Animal {
    public:
        void display1() {
            cout << "Animal Class" << endl;
        }
};

class Vaca : public Animal {
    public:
        void display2() {
            cout << "Vaca Class" << endl;
        }
};

class Perro : public Animal {
    public:
        void display3() {
            cout << "Perro Class" << endl;
        }
};

class Pato : public Animal {
    public:
        void display4() {
            cout << "Pato Class" << endl;
        }
};


int main() {
    cout << "ANIMAL" << endl;
    Animal A1;
    A1.display1();
    cout << "VACA" << endl;
    Vaca V1;
    V1.display1();
    V1.display2();
    cout << "PERRO" << endl;
    Perro P1;
    P1.display1();
    P1.display3();
    cout << "PATO" << endl;
    Pato Pa1;
    Pa1.display1();
    Pa1.display4();

    return 0;
}