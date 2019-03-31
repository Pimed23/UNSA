#include <iostream>
using namespace std;

void crear_matriz( int **&M, int f, int c ) {
    M = new int *[f];
    for( int i = 0; i < f; i++ )
        M[ i ] = new int [ c ];
}

void llenar_matriz( int **M, int f, int c ) {
    for( int i = 0; i < f; i++ )
        for( int j = 0; j < c; j++ )
            cin >> *(*( M + i ) + j );
}

void mostrar( int **M, int f, int c ) {
    for( int i = 0; i < f; i++ ) {
        for( int j = 0; j < c; j++ )
            cout << *(*( M + i ) + j ) << " ";
        cout << "\n"; }
}

void borrar( int **&M, int f ) {
    for( int i = 0; i < f; i++ )
        delete [] M[ i ];
    delete [] M;
}

int main() {
    int **M, f, c;
    cin >> f >> c;
    crear_matriz( M, f, c );
    llenar_matriz( M, f, c );
    mostrar( M, f, c );
    borrar( M, f );
    return 0;
}