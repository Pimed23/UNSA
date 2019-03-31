// FORMATTED FUNCTIONS
// width( size )              para especificar el tamano del campo requerido para imprimir un valor
// precision( size )          numero de digitos despues del decimal
// fill( "*" )                para rellenar los espacios sobrantes
// setf( parametros )         para controlar la forma de la salida derecha izquierda formato estandar
//                            notacion cientifica entre otros                
// unsetf()                   para limpiar las banderas y reiniciar la posicion

// MANIPULATORS OF FORMATTED FUNCTIONS
// Se necesita incluir el fichero <iomanip>

// FUNCTION             //  MANIPULATOR
// widht()      ->          setw()
// presicion()  ->          setprecision()
// fill()       ->          setfill()
// setf()       ->          setiosflag()
// unsetf()     ->          resetiosflag()
// "\n"         ->          endl()

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    cout.setf( ios::left, ios::adjustfield );
    cout.fill('*');
    cout.width( 10 );
    cout << "123" << endl;

    cout.width( 10 );
    cout.precision( 6 );
    cout << sqrt( 2 );
    cout << endl;





    return 0;
}