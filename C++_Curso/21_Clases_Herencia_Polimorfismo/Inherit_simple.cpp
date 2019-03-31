// HERENCIA SIMPLE
#include <iostream>
using namespace std;

class Person {
    
    public:
        void Display1() {
            cout << "Cabeza = " << head << endl;
            cout << "Piernas = " << legs << endl;
            cout << "Brazos = " << arms << endl;
        }
    
    private:
        int head = 1;
        int legs = 2;
        int arms = 2;
};

class Profesional : public Person {

    public:
        void Display2() {
            cout << "Profesion = " << profesion << endl;
        }
    private:
        string profesion = "Doctor";
};


int main() {
    Person P1;
    Profesional D1;
    cout << "PERSONA" << endl;
    P1.Display1();
    cout << "\nPROFESIONAL" << endl;
    D1.Display1();
    D1.Display2();
    return 0;
}