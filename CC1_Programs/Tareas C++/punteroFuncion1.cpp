#include <iostream>
using namespace std;

void swap( int *xPtr, int *yPtr ) {
    int tmp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = tmp;
}

bool ascendente( int i, int j ) {
    return i > j;
}

bool descendente( int i, int j ) {
    return j > i;
}

int burbuja( int arr[], int n, bool( *fp )( int, int )) {
    for( int i = 0; i < n - 1; i++ )
        for( int j = 0; j < n - i - 1; j++ )
            if(( *fp )( arr[ j ], arr[ j + 1]))
                swap( &arr[ j ], &arr[ j + 1 ]);
}

int main() {
    cout << "PROGRAMA DE ORDENAMIENTO" << endl;
    int arr[ 5 ], opc;
    cout << "Ingrese 5 numeros: " << endl;
    for( int i = 0; i < 5; i++ )
        cin >> arr[ i ];
    bool( *f[ 2 ] )( int, int ) = { ascendente, descendente };
    cout << "Desea ordenar ascendente(0) o desendente(1): "; cin >> opc;
    while( opc >= 0 && opc <= 2 ) {
        burbuja( arr, 5, *f[ opc ] );
        for( int j = 0; j < 5; j++ )
            cout << arr[ j ] << " ";
        cout << endl;
        cout << "Ingrese 5 numeros: " << endl;
        for( int i = 0; i < 5; i++ )
            cin >> arr[ i ];
        cout << "Desea ordenar ascendente(0) o desendente(1): "; cin >> opc;}
    return 0;
}

