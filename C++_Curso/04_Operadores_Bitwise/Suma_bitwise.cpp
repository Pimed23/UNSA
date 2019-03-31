#include <iostream>
using namespace std;

int sumar( int, int );

int main() {
    int a, b;
    cout << "Numero 1: ";
    cin >> a;
    cout << "Numero 2: ";
    cin >> b;
    cout << sumar( a, b ) << endl;
    return 0;
}

int sumar( int a, int b ) {
    int suma = a ^ b;
    int carry = ( a & b ) << 1;
    if( carry == 0 )
        return suma;
    else
        return sumar( suma, carry );
}