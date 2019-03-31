#include <iostream>
using namespace std;

void PedirElementos();
int Binaria( int *, int, int );
int Secuencial( int *, int, int );
void Burbuja( int *, int );

int nElementos, *array, elemento;

int main() {

    int sec, bin;
    
    PedirElementos();
    
    cout << "Ingrese el numero a buscar: ";
    cin >> elemento;

    cout << "BUSQUEDA SECUENCIAL" << endl;
    sec = Secuencial( array, nElementos, elemento );

    if( sec == -1 ) {
        cout << "El elemento no fue encontrado en el arreglo." << endl;
    }
    else {
        cout << "El elemento se encontro en la posicion: " << sec << endl;
    }

    cout << "BUSQUEDA BINARIA" << endl;
    Burbuja( array, nElementos );
    bin = Binaria( array, nElementos, elemento );

    if( sec == -1 ) {
        cout << "El elemento no fue encontrado en el arreglo." << endl;
    }
    else {
        cout << "El elemento se encontro en la posicion: " << bin << endl;
    }
    
    delete[] array;
    return 0;
}

void PedirElementos() {
    
    cout << "Numero de elementos: ";
    cin >> nElementos;

    array = new int[ nElementos ];

    for( int i = 0; i < nElementos; i++ ) {
        cout << "Ingrese digito [" << i << "]: ";
        cin >> *( array + i );
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

int Secuencial( int *array, int n, int elemento ) {
    
    for( int i = 0; i < n; i++ ) {
        if( *( array + i ) == elemento ) {
            return i;
        }
    }
    return -1;
}

int Binaria( int *array, int n, int elemento ) {
    
    int i = 0;
    int mitad;
    int inf = 0;
    int sup = n;

     while(( inf<=sup ) && ( i < n )) {
        mitad = ( inf + sup ) / 2;

        if( *( array + mitad ) == elemento ) {
            return mitad;
        }

        if( *( array + mitad ) > elemento ) {
            sup = mitad;
            mitad = ( inf + sup ) / 2;
        }

        if( *( array + mitad ) < elemento ) {
            inf = mitad;
            mitad = ( inf + sup ) / 2;
        }

        if( inf > sup ) {
            break;
        }
        i++;
    }
    return -1;    
}