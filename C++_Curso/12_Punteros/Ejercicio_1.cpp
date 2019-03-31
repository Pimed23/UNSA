#include <iostream>
using namespace std;

int main() {
    int num, *numPtr;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    numPtr = &num;
    
    if( *numPtr & 1 ) {
        cout << "El numero " << *numPtr << " es impar." << endl;
    }
    else {
        cout << "El numero " << *numPtr << " es par." << endl;
    }
    cout << "La direccion de memoria: " << numPtr << endl;

    return 0;
}