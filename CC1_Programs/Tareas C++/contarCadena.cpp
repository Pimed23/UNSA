#include <iostream>
using namespace std;

int contarCadena( char *cad ) {
    long accum;
    for( accum = 0; *cad != '\0'; cad++ )
        ++accum;
    return accum;}

int main() {
    char cadena[ 100 ];
    cin >> cadena;
    cout << contarCadena( cadena ) << endl;
    return 0;
} 
