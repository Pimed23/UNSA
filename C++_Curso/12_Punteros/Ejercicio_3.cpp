#include <iostream>
using namespace std;

int main() {
    
    int array[ 10 ], *arrayPtr;

    for( int i = 0; i < 10; i++ ) {
        cout << "Ingrese el elemento de la posicion [" << i << "] es: ";
        cin >> array[ i ];
    }

    cout << endl;
    cout << "NUMEROS PARES: " << endl;
    arrayPtr = array;

    for( int i = 0; i < 10; i++) {
        if( *arrayPtr % 2 == 0 ) {
            cout << "El numero " << *arrayPtr << " es par." << endl;
            cout << "Su posicion de mem es: " << arrayPtr << endl;
        }
        arrayPtr++;
    }

    return 0;
}