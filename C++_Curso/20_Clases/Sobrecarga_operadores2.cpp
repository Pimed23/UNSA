//SOBRECARGA CON FUNCION FRIEND
#include <iostream>
using namespace std;

class Coordenadas {

    public:
        Coordenadas( int, int );
        friend int operator ==( Coordenadas, Coordenadas );
    
    private:
        int x, y;
};

Coordenadas::Coordenadas( int _x = 0, int _y = 0 ) {
    x = _x;
    y = _y;
}

int operator ==( Coordenadas A, Coordenadas B ) {
    if( A.x == B.x && A.y == B.y ) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    Coordenadas C1( 10, 15 ), C2( 11, 15 );
    if( C1 == C2 ) {
        cout << "Son iguales" << endl;
    } else {
        cout << "Diferentes " << endl;
    }
    return 0;
}