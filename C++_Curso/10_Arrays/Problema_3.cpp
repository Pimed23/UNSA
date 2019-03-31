#include <iostream>
using namespace std;

int main() {

    cout << "Ingrese el numero de filas y columnas: " << endl;
    int n, sum = 0;
    cin >> n;
    
    int tabla[ n ][ n ];
    
    cout << "Llene la matriz: " << endl;
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) 
            cin >> tabla[ i ][ j ];
    }

    cout << "Su matriz es: " << endl;
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) 
            cout << tabla[ i ][ j ] << " ";
        cout << endl;
    }

    cout << "La suma de las filas es: " << endl;
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) 
            sum = sum + tabla[ i ][ j ];
        cout << sum << " ";
        sum = 0;
    }
    cout << endl;

    cout << "La suma de las columnas es: " << endl;
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) 
            sum = sum + tabla[ j ][ i ];
        cout << sum << " ";
        sum = 0;
    }
    cout << endl;
}