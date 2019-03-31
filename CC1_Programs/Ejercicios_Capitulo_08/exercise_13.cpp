// Ej. 8.13: ej08_13.cpp
// Que hace este programa?
// El programa concatena dos cadenas

#include <iostream>
using namespace std;

void misterio1 (char *, const char * ); // prototipo

int main() {
    char cadena1[ 80 ];
    char cadena2[ 80 ];
    cout << "Escriba dos cadenas: ";
    cin >> cadena1 >> cadena2;
    misterio1( cadena1 , cadena2 );
    cout << cadena1 << endl;
} // fin de main

// Que hace esta funcion?
// La funcion misterio es la encargada de concatenar la cadena2 en la cadena1 dandonos como resultado una sola cadena

void misterio1( char *s1, const char *s2 )
{
    while( *s1 != '\0' ) // Se encarga de escribir la primera
        ++s1;            // cadena
    for ( ; ( *s1 = *s2 ); ++s1, ++s2 ) // Concatena cadena
        ; //instruccion vacia
} // fin de la funcion misterio
