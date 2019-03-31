#include <iostream>
using namespace std;

int suma( int, int );
int rest( int, int );

int main() {
    int a, b, opc;
    cout << "Ingrese dos numeros: " << endl;
    cin >> a >> b;
    int( *f[ 2 ] )( int, int ) = { suma, rest };
    cout << "Opcion entre 0 y 1: "; cin >> opc;
    while( opc >= 0 && opc <= 1 ) {
        cout << ( *f[ opc ] )( a, b ) << endl;
        cout << "Opcion entre 0 y 1: "; cin >> opc; }
}

int suma( int a, int b ) {
    return a + b;
}

int rest( int a, int b ) {
    return a - b;
}