#include <iostream>
using namespace std;

void Prueba( int x ) {
    try {
        if( x == 1 )
            throw x;
        if( x == 0 )
            throw 'a';
        if( x == -1 )
            throw 5.14;
    }
    catch( int ) {
        cout << "Integer caught" << endl;
    }
    catch( char ) {
        cout << "Character caught" << endl;
    }
    catch( double ) {
        cout << "Double caught" << endl;
    }
}

int main() {
    
    int value;
    cout << "Value: ";
    cin >> value;
    Prueba( value );

    return 0;
}