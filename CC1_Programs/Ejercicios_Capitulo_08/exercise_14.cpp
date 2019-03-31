// Ej. 8.14: ej08_14.cpp
// Que hace este programa?
// Este programa cuenta la cantidad de caracteres que contiene
// la cadena ingresada

#include <iostream>
using namespace std;

int misterio2( const char * ); // prototipo

int main() {
    char cadena1[ 80 ];

    cout << "Escriba una cadena: " ;
    cin >> cadena1;
    cout << misterio2( cadena1 ) << endl;
} // fin de main

// Que hace esta funcion?
// La funcion se encarga de contar los caracteres

int misterio2( const char *s ) {
    unsigned int x;                // Se declara una variable acumulador
    for( x = 0; *s != '\0'; ++s )  // Se recorre la cadena
        ++x;                       // Por cada vuelta que realice
                                   // Incrementara en 1 el acumulador
    return x;                      // Devuelve el total de caracteres
}
