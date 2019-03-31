#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Ingrese la cantidad de numeros que desea ingresar: "; 
    cin >> n;

    int num[ n ], *numPtr, menor;

    for( int i = 0; i < n; i++ ) {
        cout << "Ingrese el elemento[" << i << "]: ";
        cin >> num[ i ];
    }

    numPtr = num;
    menor = *numPtr;

    for( int i = 1; i < n; i++ ) {
        if( *numPtr < menor ) {
            menor = *numPtr;
        }
        numPtr++;
    }
    
    cout << "El menor numero es: " << menor << endl;
    cout << "Su direccion de mem es: " << &menor << endl;
}