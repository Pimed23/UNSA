#include <iostream>
using namespace std;

void PedirDatos();
void Burbuja( int *, int );
void Imprimir( int *, int );

int nElementos, *elemento;

int main() {

    PedirDatos();
    Burbuja( elemento, nElementos );
    Imprimir( elemento, nElementos );
    delete [] elemento;
    return 0;
}

void PedirDatos() {
    cout << "Numero de elementos: ";
    cin >> nElementos;

    elemento = new int[ nElementos ];

    for( int i = 0; i < nElementos; i++ ) {
        cout << "Digite un numero [" << i << "]: ";
        cin >> *( elemento + i );
    }
}

void Burbuja( int *array, int n ) {
    int aux;
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n - 1; j++ ) {
            if( *( array + j ) > *( array + j + 1 )) {
                aux = *( array + j );
                *( array + j ) = *( array + j + 1 );
                *( array + j + 1 ) = aux;
            }
        }
    }
}

void Imprimir( int *array, int n ) {
    cout << "El arreglo ordenado sera: { ";
    for( int i = 0; i < n - 1; i++ ) {
        cout << *( array + i ) << ", ";
    }
    cout << *( array + n - 1 ) << " }" << endl;
}