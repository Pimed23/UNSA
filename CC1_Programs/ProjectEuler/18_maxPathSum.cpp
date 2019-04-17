#include <iostream>
using namespace std; 

inline int max_num( int a, int b ) {
    return ( a > b ) ? a : b;
}

int main() {

    int tree[ 15 ][ 15 ] = { 0 };

    for( int i = 0; i < 15; ++i )
        for( int j = 0; j <= i; ++j )
            cin >> tree[ i ][ j ];

    cout << endl;
    
    for( int i = 0; i < 15; ++i ) {
        for( int j = 0; j < 15; ++j ) {
            cout.fill( '0' );
            cout.width( 2 );
            cout << tree[ i ][ j ] << " ";
        }

        cout << endl;
    }

    for( int i = 1; i < 15; i++ ) {
        tree[ i ][ 0 ] += tree[ i - 1 ][ 0 ];
        tree[ i ][ i ] += tree[ i - 1 ][ i - 1 ];
    }

    for( int i = 2; i < 15; i++ )
        for( int j = 1; j < i; j++ )
            tree[ i ][ j ] += max_num( tree[ i - 1 ][ j - 1 ], tree[ i - 1 ][ j ]);
    
    int maximo = tree[ 14 ][ 0 ];
    for( int i = 1; i < 15; ++i ) {
        if( tree[ 14 ][ i ] > maximo )
            maximo = tree[ 14 ][ i ];
    }

    cout << maximo << endl;

    return 0;
}
  
