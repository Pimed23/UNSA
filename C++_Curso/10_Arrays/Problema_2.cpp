#include <iostream>
using namespace std;

int array[ 10 ] = { 2, 1, 3, 8, 5, 6, 7, 4, 9, 10 };

int burbuja( char );

int main() {
    for( int i = 0; i < 10; i++ )
        cout << array[ i ] << " ";
    cout << endl;
    
    burbuja( 'm' );
    for( int i = 0; i < 10; i++ )
        cout << array[ i ] << " ";
    cout << endl;

    burbuja( 'M' );
    for( int i = 0; i < 10; i++ )
        cout << array[ i ] << " ";
    cout << endl;
}

int burbuja( char orden ) {
    if( orden == 'm' ) {
        for( int j = 1; j < 10; j++ ) {
            for( int i = 0; i < 9; i++ ) {
                if( array[ i ] > array[ i + 1 ]) {
                    int temp = array[ i ];
                    array[ i ] = array[ i + 1 ];
                    array[ i + 1 ] = temp;
                }
            }
        }
    }

   if( orden == 'M' ) {
        for( int j = 1; j < 10; j++ ) {
            for( int i = 0; i < 9; i++ ) {
                if( array[ i ] < array[ i + 1 ]) {
                    int temp = array[ i ];
                    array[ i ] = array[ i + 1 ];
                    array[ i + 1 ] = temp;
                }
            }
        }
    }
}