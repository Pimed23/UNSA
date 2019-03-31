#include <iostream>
using namespace std;

int MayorElemento( int *, int );

int main() {

    int n;

    cout << "Ingrese el tamano de la lista: ";
    cin >> n;

    int numeros[ n ];

    for( int i = 0; i < n; i++ ) {
        cout << "Ingrese numeros[" << i << "]: ";
        cin >> numeros[ i ];
    }

    cout << "El mayor elemento es: " << endl;
    cout << MayorElemento( numeros, n ) << endl;
    
    return 0;
}

int MayorElemento( int *lista, int n ) {
    
    int mayor;
    mayor = *lista;

    for( int i = 0; i < ( n - 1 ); i++ ) {
        if( *( lista + i ) > mayor ) {
            mayor = *( lista + i );
        }
    }
    return mayor;
}
