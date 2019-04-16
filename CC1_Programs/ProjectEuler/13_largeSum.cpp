#include <iostream>
using namespace std;

template < typename Type >
void reverse( Type * );
template < typename Type >
void print( Type * );

int main() {

    char cad[ 50 ], *cadPtr;
    int acc[ 50 ] = { 0 }, carry = 0, presum = 0;

    cadPtr = cad;

    for( int i = 0; i < 100; ++i ) {
        for( int j = 0; j < 50; ++j )
            cin >> cad[ j ];

        reverse( cad );

        for( int j = 0; j < 50; ++j ) {
            presum = acc[ j ] + *( cad + j ) - 48 + carry;
            carry = 0;
            if( presum > 9 ) {
                acc[ j ] = ( presum % 10 );
                ++carry;
            }

            else
                acc[ j ] = presum;

            if( j == 49 ) 
                acc[ j ] = presum;
            
            presum = 0;
        }
        
    }

    reverse( acc );
    print( acc );
    cout << endl;

    return 0;
}

template < typename Type >
void reverse( Type *cad ) {

    for( int i = 0, j = 49; i < 25; ++i, --j ) {
        char temp = *( cad + i );
        *( cad + i ) = *( cad + j );
        *( cad + j ) = temp;
    }
}

template < typename Type >
void print( Type *cad ) {

    for( int i = 0; i < 50; i++ ) {
        cout << cad[ i ];
    }
}

