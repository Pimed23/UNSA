#include <iostream>
using namespace std;

int main() {
    int c = 0;
    bool x = false;
    for( int i = 'A'; i <= 'Z'; i++ ) {
        x = !x;
        if( x )
            cout << ( char )( i );
        else
            cout << ( char )( i + 32 ); 
    }
    cout << endl;

    for( int i = 'A'; i <= 'Z'; i++ ) {
        if( x )
            cout << ( char )( i );
        else
            cout << ( char )( i + 32 ); 
        x = !x; 
    }
    cout << endl;

    for( int i = 'A'; i <= 'Z'; i++ ) {
        if( c % 2 == 0 )
            x = !x;
        if( x )
            cout << ( char )( i );
        else
            cout << ( char )( i + 32 ); 
        c++;
    }
    cout << endl;

    for( int i = 'A'; i <= 'Z'; i++ ) {
        if( c % 2 == 0 )
            x = !x;
        if( x )
            cout << ( char )( i );
        else
            cout << ( char )( i + 32 ); 
        c++;
    }
    cout << endl;
}