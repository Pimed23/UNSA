// SOBRECARGA DE FUNCIONES
// Actua sobre una misma clase
// Los parametros de la funcion deben ser diferentes
// El tipo de retorno puede ser diferente

#include <iostream>
using namespace std;

class Mate {
    public:
        int multiplicar( int x, int y ) {
            return x * y;
        }
        int multiplicar( double x, double y ) {
            return x * y;
        }
        float multiplicar( double x, bool y ) {
            return x * y;
        }

};

int main() {
    Mate m1;
    cout << m1.multiplicar( 2, 3 ) << endl;
    cout << m1.multiplicar( 2.30, 5.2 ) << endl;
    cout << m1.multiplicar( 2.3, true ) << endl;
    
    return 0;
}