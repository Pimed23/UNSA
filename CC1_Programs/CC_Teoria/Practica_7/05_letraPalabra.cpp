#include <iostream>
#include <string.h>
using namespace std;

int contar( char *cad, char c ) {
    long accum;
    for( accum = 0 ; *cad != '\0'; cad++ )
        if( *cad == c ){
            ++accum;
            *cad = ' ';}
    return accum;
}

int main() {
    char *cad;
    char c;
    cad = new char[ 20 ];
    cin.getline( cad, 20 );
    for( int i = 0; i < strlen(cad); i++ ) {
        c = *( cad + i );
        int n = contar( cad, c );
        if( c != ' ' )
            cout << "La letra " << c << " se repite " << n << " veces." << endl;}
    delete [] cad;
}