#include <iostream>
using namespace std;

void pedirPalabra();
int longitudCadena( char * );

char palabra[10], *palabraPtr;

int main() {
    
    pedirPalabra();
    cout << "La palabra " << palabra << " tiene "
    << longitudCadena( palabraPtr ) << " letras." << endl;

}

void pedirPalabra() {

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    palabraPtr = palabra;
}

int longitudCadena( char *word ) {
    
    char *copia = word;
    while( *word ) word++;
    return( word - copia );
}