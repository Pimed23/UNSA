#include <iostream>
using namespace std;

class Prueba {
    public:
        Prueba() {
            this -> num1 = 0;
            this -> num2 = 0;
        }

        Prueba( int num1, int num2 ) {
            this -> num1 = num1;
            this -> num2 = num2;
        }

        void Display() {
            cout << "Num1: " << this -> num1 << endl;
            cout << "Num2: " << this -> num2 << endl;  
        }

        Prueba Sumar( const Prueba num ) {
            num1 = num1 + num.num1;
            num2 = num2 + num.num2;
            return *this;
        }

    private:
        int num1, num2;

};


int main() {
    Prueba P1( 3, 2 );
    P1.Display();
    Prueba P2( 5, 4 );
    P2.Display();
    P1.Sumar( P2 );
    P1.Display();

    return 0;
}