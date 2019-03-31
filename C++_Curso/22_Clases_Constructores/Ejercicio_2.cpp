#include <iostream>
using namespace std;

class Fecha {

    public:
        Fecha( int _dia, int _mes, int _anno ) : dia( _dia ), mes( _mes ), anno( _anno ) {}
        Fecha( int );
        void mostrarFecha();

    private:
        int dia, mes, anno;
};

Fecha::Fecha( int _fecha ) {
    anno = _fecha / 10000;
    mes = (( _fecha - anno * 10000 ) / 100 );
    dia = _fecha % 100;
}


void Fecha::mostrarFecha() {
    cout << "La fecha es: " << dia << "/ " << mes << "/ " << anno << endl;
}

int main() {

    Fecha F1( 23, 03, 1996 );
    Fecha F2( 19960323 );
     
    F1.mostrarFecha();
    F2.mostrarFecha();
    return 0;
}