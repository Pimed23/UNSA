#include <iostream>
using namespace std;

struct bmpFecha {
    unsigned short int dia: 5;
    unsigned short int mes: 4;
    unsigned short int anyo: 7;
} fecha[ 2 ];

char meses[ 12 ][ 11 ] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" };
int diaMes[ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool bisiesto( bmpFecha f );
bool validarFecha( bmpFecha f );
bool validarDia( int auxD );
bool validarMes( int auxM );
bool validarAnyo( int auxA );
void mostrarFecha( bmpFecha f );
int numeroDias( bmpFecha f );
int mayor( bmpFecha f1, bmpFecha f2 );
int compararFechas( bmpFecha f1, bmpFecha f2 );

int main() {

    int aux;

    for( int i = 0; i < 2; i++ ) {

        cout << "FECHA #" << i + 1 << endl;

        cout << "Introduzca el dia " << endl;
        cin >> aux;
        while( !validarDia( aux )) {
            cout << "Dia invalido ingrese un valor entre 1 y 31..." << endl;
            cin >> aux;
        }
        fecha[ i ].dia = aux;

        cout << "Introduzca el mes " << endl;
        cin >> aux;
        while( !validarMes( aux )) {
            cout << "Mes invalido ingrese un valor entre 1 y 12..." << endl;
            cin >> aux;
        }
        fecha[ i ].mes = aux;

        cout << "Introduzca el anyo " << endl;
        cin >> aux;
        while( !validarAnyo( aux )) {
            cout << "Anyo invalido ingrese un valor entre 1960 y 2087..." << endl;
            cin >> aux;
        }
        fecha[ i ].anyo = aux - 1960;
        
        if( validarFecha( fecha[ i ])) { 
            cout << "Fecha correcta" << endl;
        }
        else {
            cout << "La fecha indicada no existe" << endl;
        }
    
        mostrarFecha( fecha[ i ]);
        cout << endl;
    }

    cout << "Las fechas estan separadas: ";
    cout << compararFechas( fecha[ 0 ], fecha[ 1 ]) << " dias" << endl;

    cout << numeroDias( fecha[ 0 ]) << endl;
    cout << numeroDias( fecha[ 1 ]) << endl;

    cout << "Devolver 1 si la primera es mayor, -1 si la segunda es mayor y 0 si son iguales: " << endl;
    cout << mayor( fecha[ 0 ], fecha[ 1 ]) << endl;
    
    cout << endl;
}

bool bisiesto( bmpFecha f ) {

    if((( f.anyo + 1960 ) % 4 == 0 ) && (( f.anyo + 1960 ) % 100 != 0 )) {
        return true;
    }
    else {
        if(( f.anyo + 1960 ) % 400 == 0 ) {
            return true;
        }
        else {
            return false;
        }
    }
}

bool validarDia( int auxD ) {

    if( auxD > 0 && auxD < 32 ) {
        return true;
    }
    else {
        return false;
    }
}

bool validarMes( int auxM ) {

    if( auxM > 0 && auxM < 13 ) {
        return true;
    }
    else {
        return false;
    }
}

bool validarAnyo( int auxA ) {

    if( auxA > 1959 && auxA < 2088 ) {
        return true;
    }
    else {
        return false;
    }
}

bool validarFecha( bmpFecha f ) {

    if( bisiesto( f )) {
        diaMes[ 1 ] = 29;
    }
    else {
        diaMes[ 1 ] = 28;
    }

    if(( f.dia > diaMes[ f.mes - 1 ]) || ( f.dia == 0 )) {
        return false;
    }
    else {
        if( f.mes > 12 ) {
            return false;
        }
        else {
            return true;
        }
    }
}

int numeroDias( bmpFecha f ) {
    
    int bis, nor, dias = 0, numD;

    if( bisiesto( f )) {
        bis = ( f.anyo / 4 );
    }
    else {
        bis = ( f.anyo / 4 ) + 1;
    }

    for( int i = 0; i < f.mes - 1; i++ ) { 
        dias = diaMes[ i ] + dias;
    }

    nor = f.anyo - bis;
    numD = 366 * bis + 365 * nor + dias + f.dia;
    return numD;
}

int mayor( bmpFecha f1, bmpFecha f2 ) {
    if( numeroDias( f1 ) > numeroDias( f2 )) {
        return -1;
    }
    else {
        if( numeroDias( f1 ) == numeroDias( f2 )) {
            return 0;
        }
        return 1;
    }
}

int compararFechas( bmpFecha f1, bmpFecha f2 ) {
    int sepDias;
    sepDias = numeroDias( f1 ) - numeroDias( f2 );
    sepDias = abs( sepDias );
    return sepDias;
}


void mostrarFecha( bmpFecha f ) {
    cout << "El dia seleccionado es " << f.dia << "/" << meses[ f.mes - 1 ] << "/" << f.anyo + 1960 << endl;
}
