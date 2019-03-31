#include <iostream>
using namespace std;

class Prueba {

    public:
        static void setData( int x ) {
            i = x;
            //LAS FUNCIONES ESTATICAS SOLO PUEDEN SER USADAS POR VARIABLES ESTATICAS
            //j = x; EXPRESION ERRONEA
        }
        
        void showData() {
            cout << i << endl;
        }

    private:
        static int i;
        int j;

};

int Prueba::i;

int main() {
    Prueba::setData( 100 );
    // LAS FUNCIONES ESTATICAS PUEDEN SER LLAMADAS POR LA CLASE, NO ES NECESARIO CREAR
    // UN OBJETO
    Prueba p1;
    p1.showData();
    return 0;
}