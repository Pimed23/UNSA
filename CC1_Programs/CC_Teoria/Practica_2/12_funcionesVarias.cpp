#include <iostream>
using namespace std;

void pares_impares();
void perfecto();
int invertir();

int main() {
    int opc;
    cout << "PROGRAMA DE VARIAS FUNCIONES" << endl;
    cout << "1) Numeros pares o impares " << endl;
    cout << "2) Numeros perfectos " << endl;
    cout << "3) Invertir un numero " << endl;
    cout << "Elija el numero de una de las opciones: " << endl;
    while( true ) {
        cin >> opc;
        if( opc < 1 || opc > 3 )
            cout << "Error elija una opcion valida..." << endl;
        else {
            if( opc == 1 ) {
                pares_impares();
                break; }
            else if( opc == 2 ) {
                perfecto();
                break;}
            else if( opc == 3 ){
                cout << invertir() << endl;
                break;}}}
}

void pares_impares() {
    cout << "NUMEROS PARES E IMPARES" << endl;
    int num, par = 0, impar = 0;
    for( int i = 0; i < 10; i++ ) {
        cin >> num;
        if( num % 2 == 0 )
            par++;
        else 
            impar++; }
    cout << "Hay " << par << " pares." << endl;
    cout << "Hay " << impar << " impares." << endl;
}

void perfecto() {
    cout << "NUMEROS PERFECTOS" << endl;
    for( int i = 6; i <= 100; i++ ) {
        int acc = 0;
        for( int j = 1; j < i; j ++ ) {
            if( i % j == 0 ) 
                acc = acc + j;}
        if( acc == i )
            cout << i << " ";}
    cout << endl;
}

int invertir() {
    cout << "INVERTIR UN NUMERO" << endl;
    int num;
    while( true ) {
        cin >> num;
        if( num < 1000 || num > 9999 )
            cout << "Numero invalido. Ingrese otro" << endl;
        else {
            int d1 = num / 1000;
            int d2 = ( num % 1000 ) / 100;
            int d3 = (( num % 1000 ) % 100 ) / 10;
            int d4 = (( num % 1000 ) % 100 ) % 10;
            return (( d4 * 1000 ) + ( d3 * 100) + ( d2 * 10) + d1 ); }}
}