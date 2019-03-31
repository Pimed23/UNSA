#include <iostream>
using namespace std;

bool Incrementa( char numero[10]);

int main() {
    char cadena[ 10 ];
    int numero;

    cout << "Introduce una cadena de 9 o menos caracteres: ";
    cin >> cadena;

    if( Incrementa( cadena )) {
        numero = atoi( cadena ) + 1;
        if( numero == 1000000000 )
            numero = 0;
        cout << numero << endl;
    }
    
    else {
        cout << cadena << endl;
    }
}   

bool Incrementa( char numero[ 10 ]) {
    for( int i = 0; numero[ i ] != '\0'; i++ ) {
        if( isalnum( numero[ i ]) && isalpha( numero[ i ]))
            return false;
    }
    return true;
}