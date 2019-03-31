#include <iostream>
using namespace std;

int Mult_Pot_2( int, int );

int main() {
    int base, pot;
    cout << "Base: ";
    cin >> base;
    cout << "Exponente: ";
    cin >> pot;
    cout << "Resultado: ";
    cout << Mult_Pot_2( base, pot ) << endl;
    return 0;
}


int Mult_Pot_2( int a, int power ) {
    return a << power;
}