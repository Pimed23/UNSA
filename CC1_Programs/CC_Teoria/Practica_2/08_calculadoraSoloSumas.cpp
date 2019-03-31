#include <iostream>
using namespace std;

int main() {
    int a, b, m = 0, opc;
    while( true ) {
        cout << "Ingrese el valor de a: ";
        cin >> a;
        cout << "Ingrese el valor de b: ";
        cin >> b;
        cout << "a y b los quiere..." << endl;
        cout << "1) Sumar" << endl;
        cout << "2) Restar" << endl;
        cout << "3) Multiplicar" << endl;
        cout << "Coloque el numero de la opcion requerida: ";
        cin >> opc;
        if ( opc >= 3 || opc <= 0 )
            cout << "NO EXISTE LA OPERACION" << endl;
        if ( opc == 1 )
            cout << a + b << endl;
        else if ( opc == 2 )
            cout << a - b << endl;
        else if ( opc == 3 ) {
            for( int i = 0; i < b; i++)
                m += a;
                cout << "La respuesta es: " << m << endl;}
    cout << endl;}
}