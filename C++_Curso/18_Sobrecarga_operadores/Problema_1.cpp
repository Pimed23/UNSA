#include <iostream>
using namespace std;

struct stAngulo {
    int grados;
    int minutos;
    int segundos;
};

stAngulo operator +( stAngulo &, stAngulo & );
ostream& operator <<( ostream &, stAngulo & );

int main() {

    stAngulo a, b, sum;

    a.grados = 35;
    a.minutos = 52;
    a.segundos = 56;

    b.grados = 75;
    b.minutos = 38;
    b.segundos = 47;

    sum = a + b;

    cout << a << endl;
    cout << b << endl;
    cout << sum << endl;

    return 0;
}

stAngulo operator +( stAngulo &a, stAngulo &b ) {
    stAngulo suma;
    suma.segundos = a.segundos + b.segundos;
    if( suma.segundos > 60 ) {
        suma.segundos -= 60;
        a.minutos++;
    }
    suma.minutos = a.minutos + b.minutos;
    if( suma.minutos > 60 ) {
        suma.minutos -= 60;
        a.grados++;
    }
    suma.grados = a.grados + b.grados;
    
    return suma;
}

ostream& operator <<( ostream &o, stAngulo &a ) {
    o << a.grados << "° " << a.minutos << "' " << a.segundos << "'' ";
    return o;
}
