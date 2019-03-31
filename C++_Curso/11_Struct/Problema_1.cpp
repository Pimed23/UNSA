#include <iostream>
#include <string.h>
using namespace std;

struct Persona {
    int Telef;
    char Nombre[ 20 ];
} Plantilla[ 2 ];

int main() {

    bool salida = true;
    char escoger;

    for( int i = 0; i < 10; i++ ) {
        cout << "Ingrese el nombre de la Persona " << i << ": ";
        cin >> Plantilla[ i ].Nombre;
        cout << "Ingrese el telefono de la Persona " << i << ": ";
        cin >> Plantilla[ i ].Telef;
    }

    while( salida ) {
        cout << endl;
        cout << "QUE DESEA HACER? " << endl;
        cout << "a) Buscar por nombre" << endl;
        cout << "b) Buscar por numero telefonico" << endl;
        cout << "c) Salir" << endl;
        cin >> escoger;
    

        switch( escoger )
        {
            case 'a': {

                char nombre[ 20 ];
                cout << "Ingrese el nombre buscado: ";
                cin >> nombre;

                for( int i = 0; i < 10; i++ ) {
                if( strcmp( Plantilla[i].Nombre, nombre ) == 0 ) {
                        cout << "Datos encontrados de la persona buscada: " << endl;
                        cout << Plantilla[ i ].Nombre << endl;
                        cout << Plantilla[ i ].Telef << endl;
                        break;
                    }
                }
                break;
            }
            
            case 'b': {

                int telefono;
                cout << "Ingrese el numero telefonico buscado: ";
                cin >> telefono;

                for( int i = 0; i < 10; i++ ) {
                if( Plantilla[i].Telef == telefono ) {
                        cout << "Datos encontrados de la persona buscada: " << endl;
                        cout << Plantilla[ i ].Nombre << endl;
                        cout << Plantilla[ i ].Telef << endl;
                        break;
                    }
                }
                break;
            }

            case 'c': {
                salida = false;
                break;
            }
        }
    }
}