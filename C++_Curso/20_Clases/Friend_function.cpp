#include <iostream>
using namespace std;

// LAS FUNCIONES FRIEND NO PERTENECEN PERO PUEDEN USAR LOS DATOS PRIVADOS DE LA MISMA

class Personaje {

    public:
        Personaje( int, int );
        void mostrarValores();
        friend void Modificar( Personaje &, int, int );
    
    private:
        int ataque, defensa;
};

Personaje::Personaje( int _ataque, int _defensa ) {
    ataque = _ataque;
    defensa = _defensa;
}

void Personaje::mostrarValores() {
    cout << "Ataque =  " << ataque << endl;
    cout << "Defensa = " << defensa << endl;
}

void Modificar( Personaje &p, int a, int d ) {
    p.ataque = a;
    p.defensa = d;
}

int main() {
    Personaje P1( 100, 50 );
    P1.mostrarValores();
    Modificar( P1, 10, 5 );
    P1.mostrarValores();
    return 0;
}