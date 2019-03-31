#include <iostream>
using namespace std;

int main() {
    
    int divisores = 0, num, *numPtr;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    numPtr = &num;

    for( int i = 1; i <= *numPtr; i++ ) {
        if( *numPtr % i == 0 ) {
            divisores++;
        }

        if( divisores == 3 ) {
            break;
        }
    }

    if( divisores == 2 ) {
        cout << "El numero " << *numPtr << " es primo." << endl;
    }
    else {
        cout << "El numero " << *numPtr << " no es primo." << endl;
    }

    cout << "La direccion de mem: " << numPtr << endl;
    return 0;
}