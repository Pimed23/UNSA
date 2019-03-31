#include <iostream>
using namespace std;

class Tiempo {

    public:
        Tiempo( int _horas, int _minutos, int _segundos ) : horas( _horas ), minutos( _minutos ), segundos( _segundos ) {}
        Tiempo( int );
        void mostrarTiempo();

    private:
        int horas, minutos, segundos;
};

Tiempo::Tiempo( int _tiempo ) {
    segundos = _tiempo % 60;
    minutos = ( _tiempo / 60 ) % 60;
    horas =  _tiempo / 3600;
}

void Tiempo::mostrarTiempo() {
    cout << "La hora es: " << horas << ":" << minutos << ":" << segundos << endl;
}

int main() {

    Tiempo T1( 8930 );
    Tiempo T2( 2, 28, 50 );

    T1.mostrarTiempo();
    T2.mostrarTiempo();
    return 0;
}