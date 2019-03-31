#include <iostream>
using namespace std;

//ESTRUCTURA PRINCIPAL
struct fecha {
   int dia;
   int mes;
   int anno;
};

//VARIABLES GLOBALES
char meses[ 12 ][ 11 ] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" };
int diaMes[ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

fecha f1, f2;
fecha menor, mayor;

//FUNCIONES DEL PROGRAMA

void ingresarDatos( fecha & );

bool validarAnyo( int auxA );
bool validarMes( int auxM );
bool bisiesto( int );
bool validarDia( fecha );

void comparacion( fecha, fecha );

//OPERADORES SOBRECARGADOS
ostream& operator <<( ostream &, fecha );
int operator -( fecha, fecha );

//COMIENZO DEL PROGRAMA
int main() {
    
    cout << "INGRESE LA PRIMERA FECHA: " << endl;
    ingresarDatos( f1 );
    cout << "Su primera fecha es " << f1 << endl;

    cout << "\nINGRESE LA SEGUNDA FECHA: " << endl;
    ingresarDatos( f2 );
    cout << "Su segunda fecha es " << f2 << endl;

    comparacion( f1, f2 );

    cout << "RESULTADOS: " << endl;
    cout << mayor - menor << endl;

}

//DESARROLLO DE FUNCIONES
void ingresarDatos( fecha &f) {

    cout << "Ingrese el anyo: "; cin >> f.anno;

    while( !validarAnyo( f.anno )) {
        cout << "Anyo incorrecto... Ingrese un anyo entre 1960 y 2087 " << endl;
        cout << "Ingrese el anyo: "; cin >> f.anno;
    }

    cout << "Ingrese el mes: "; cin >> f.mes;

    while( !validarMes( f.mes )) {
        cout << "Mes incorrecto... Ingrese un mes entre 1 y 12 " << endl;
        cout << "Ingrese el mes: "; cin >> f.mes;
    }

    cout << "Ingrese el dia: "; cin >> f.dia;
    
    while( !validarDia( f )) {
        cout << "Dia incorrecto... Ingrese un dia entre 1 y " << diaMes[ f.mes - 1 ] << endl;
        cout << "Ingrese el dia: "; cin >> f.dia;
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

bool validarMes( int auxM ) {

    if( auxM > 0 && auxM < 13 ) {
        return true;
    }
    else {
        return false;
    }
}

bool bisiesto( int f ) {

    if((( f + 1960 ) % 4 == 0 ) && (( f + 1960 ) % 100 != 0 )) {
        return true;
    }
    else {
        if(( f + 1960 ) % 400 == 0 ) {
            return true;
        }
        else {
            return false;
        }
    }
}

bool validarDia( fecha f ) {

    if( bisiesto( f.anno )) {
        diaMes[ 1 ] = 29;
    }
    else {
        diaMes[ 1 ] = 28;
    }

    if(( f.dia > diaMes[ f.mes - 1 ]) || ( f.dia <= 0 )) {
        return false;
    }
    else {
        return true;
    }
}

void comparacion( fecha f1, fecha f2 ) {

    if( f1.anno == f2.anno ) {
        if( f1.mes == f2.mes ) {
            if( f1.dia >= f2.dia ) {
                mayor = f1;
                menor = f2;
            } else {
                mayor = f2;
                menor = f1;
            }
        } else if( f1.mes > f2.mes ) {
            mayor = f1;
            menor = f2;
        } else {
            mayor = f2;
            menor = f1;
        }
    } else if( f1.anno > f2.anno ) {
        mayor = f1;
        menor = f2;
    } else {
        mayor = f2;
        menor = f1;
    }
}

int operator -( fecha M, fecha m ) {

    int cont = 0, bis, nor, dias_m = 0, dias_M = 0, tot;

    validarDia( M );
    for( int i = 0; i < M.mes - 1; i++ ) { 
        dias_M = diaMes[ i ] + dias_M;
    }
    dias_M = dias_M + M.dia;

    validarDia( m );
    for( int j = m.mes; j < 12; j++ ) { 
        dias_m = diaMes[ j ] + dias_m;
    }
    dias_m = dias_m + diaMes[ m.mes - 1 ] - m.dia;

    if( m.anno == M.anno ) {
        bis = 0;
        nor = 0;
        dias_M = dias_M - 1;
    } else {
        while( !bisiesto( m.anno )) {
            if( m.anno == M.anno ) {
                break;
            }
            cont += 1;
            m.anno++;
        }
    }

    bis = ( M.anno - m.anno ) / 4;
    nor = ( M.anno - m.anno ) - bis + cont - 1;

    tot = 366 * bis + 365 * nor + dias_m + dias_M;
    return tot;
}

ostream& operator <<( ostream &o, fecha f ) {
    o << f.dia << " de " << meses[ f.mes - 1 ] << " de " << f.anno;
    return o;
}
