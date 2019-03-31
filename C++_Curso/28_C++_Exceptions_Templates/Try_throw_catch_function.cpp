#include <iostream>
using namespace std;

void Prueba( int x ) {
    if( x == 0 )
        throw x;
    else
        cout << "No exception" << endl;
}

int main() {

    int valor;
    
    cout << "Valor: ";
    cin >> valor;

    try {
        Prueba( valor );
    }

    catch( int ) {
        cout << "Exception value" << endl;
    }

    return 0;
}