#include <iostream>
using namespace std;

void PedirEle();
void Ordenar( int *, int, bool );
void Imprimir( int *, int );

int nElementos, *vectorPtr, vector[ 30 ];
bool direc;

int main() {

    PedirEle();
    Ordenar( vectorPtr, nElementos, direc );
    Imprimir( vectorPtr, nElementos );
    return 0;
}

void PedirEle() {

    cout << "Ingrese el numero de elementos: ";
    cin >> nElementos;
    
    vectorPtr = vector;

    for( int i = 0; i < nElementos; i++ ) {
        cout << "Ingrese el elemento [" << i << "]: ";
        cin >> *( vectorPtr + i );
    }
    
    cout << "Desea ordenar Ascendente(1) o Descendente(0): ";
    cin >> direc;
}

void Ordenar( int* vector, int nElementos, bool ascendente ) {
    
    int *iniPtr = vector;
    int *finPtr = vector + nElementos - 1;

    for( int i = 0; i < nElementos / 2; i++ ) {
        if( ascendente == true ) {
            if( *( iniPtr + i ) > *( finPtr - i )) {
                int aux = *( iniPtr + i );
                *( iniPtr + i ) = *( finPtr - i );
                *( finPtr - i ) = aux;
                i = 0;
            }
        }
        if( ascendente == false ) {
            if( *( iniPtr + i ) < *( finPtr - i )) {
                int aux = *( iniPtr + i );
                *( iniPtr + i ) = *( finPtr - i );
                *( finPtr - i ) = aux;
                i = 0;
            }
        }
    }
}

void Imprimir( int *vector, int n ) {
    for( int i = 0; i < n ; i++ ) {
        cout << *( vector + i ) << " ";
    }
    cout << endl;
}