// Una funcion  virtual que es declarada dentro de la clase base
// y redefinida en la clase derivada

#include <iostream>
using namespace std;

class Base {
    public:
        virtual void show() {
            cout << "Clase base " << endl;
        }
};

class Derivada1 : public Base {
    public:
        void show() {
            cout << "Clase Derivada 1" << endl;
        }
};

class Derivada2 : public Base {
    public:
        void show() {
            cout << "Clase Derivada 2" << endl;
    }
};

int main() {
    Base *bPtr;
    Derivada1 D1;
    Derivada2 D2;

    bPtr = &D1;
    bPtr -> show();

    bPtr = &D2;
    bPtr -> show();
    return 0;
}