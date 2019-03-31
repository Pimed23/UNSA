#include <iostream>
using namespace std;

void Prueba( int x ) {
    try {
        if( x == 1 ) throw 1;
        else if( x == 0 ) throw 'a';
        else if( x == -1 ) throw -1;
        else cout << "value: " << x << endl;
    }

    
    catch( ... ) {
        cout << "Exception founded" << endl;
    }
}


int main() {

    Prueba( -1 );
    Prueba( 1 );
    Prueba( 0 );
    Prueba( 2 );
    return 0;
}