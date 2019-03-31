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
    int tamano = contarCadena( cadena );
    char *primero = cadena;
    char *ultimo, *temp;
    ultimo = primero + tamano - 1;
    for( int i = 0; i < ( tamano / 2 ); i++ ) {
        *temp = *primero;
        *primero = *ultimo;
        *ultimo = *temp;
        *primero++;
        *ultimo--;}

    cout << cadena << endl;
    return 0;
}
    
