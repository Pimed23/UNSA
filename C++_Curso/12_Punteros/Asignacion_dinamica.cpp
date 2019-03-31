#include <iostream>
using namespace std;

void pedirCalificaciones();
void imprimirCalificaciones();

int numCalif, *calif;

int main() {
    pedirCalificaciones();
    cout << "\nLas notas son: " << endl;
    imprimirCalificaciones();

    delete[] calif;

}

void pedirCalificaciones() {
    cout << "Ingrese el # de notas: ";
    cin >> numCalif;

    calif = new int[ numCalif ];

    for( int i = 0; i < numCalif; i++ ) {
        cout << "Ingrese la nota[" << i << "]: ";
        cin >> calif[ i ];
    }
}

void imprimirCalificaciones() {
    for( int i = 0; i < numCalif; i++ ) {
        cout << calif[ i ] << endl;        
    }
}