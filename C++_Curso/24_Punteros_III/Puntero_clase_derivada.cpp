//Se puede acceder a metodos de clases derivadas con un puntero de la clase base
//aplicando un casteo a dicha clase
#include <iostream>
using namespace std;

class Base {
    public:
        void Show() {
            cout << "Clase Base " << endl;
        }
};

class Derivada : public Base {
    public:
        void Display() {
            cout << "Clase Derivada " << endl;
        }
};

int main() {
    Base B1;
    Derivada D1;
    Base *BasePtr;
    BasePtr = &B1;
    BasePtr->Show();
    BasePtr = &D1;
    (( Derivada * )BasePtr ) -> Display();

    return 0;
}