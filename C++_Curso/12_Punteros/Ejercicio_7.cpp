#include <iostream>
#include <string.h>

using namespace std;

void PedirNombre();
int longitudCadena( char * );
void toUpper( char * );
int contarVocales( char * );

char nombre[ 30 ], *nombrePtr;


int main() {

    int n;
    PedirNombre();
    toUpper( nombrePtr );
    cout << "Tu nombre tiene " << contarVocales( nombrePtr ) << " vocales." << endl;

    return 0;
}

void PedirNombre() {

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    nombrePtr = nombre;

}

int contarVocales( char *word ) {
    
    int nVocales = 0;
    while( *word ) {
        switch ( *word ) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': nVocales++;
        }
        word++;
    }
    return nVocales;
}

int longitudCadena( char *word ) {
    
    char *copia = word;
    while( *word ) word++;
    return( word - copia );
}

void toUpper( char *word ) {
    
    for( int i = 0; *( word + i ) != '\0'; i++ ) {
        *( word + i ) = toupper( *( word + i ));
    }
}