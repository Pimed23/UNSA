#include <string.h>   
#include <iostream>
using namespace std;

int main() {
    char s1[] = "Aols";
    char s2[] = "Aola";
    strcpy( s2, s1 ); // Copia el segundo parametro al primero
    cout << s1 << endl; 
    cout << s2 << endl;
    strncpy( s2, s1, 1 ); // Igual a strcpy pero pero con restriccion de palabras copiadas
    cout << s1 << endl;
    cout << s2 << endl;
    strcat( s1, s2 ); // Concatena el segundo parametro al primer parametro
    cout << s1 << endl;
    strncat( s1, s2, 2 ); // Igual que el Strcat pero con la restriccion de tamano
    cout << s1 << endl;
    cout << strcmp( s2, s1 ) << endl; // Compara dos cadenas la 1era respecto a la 2da y muestra la diferencia del primer caracter  
    cout << strncmp( s2, s1, 3 ) << endl; // Compara dos cadenas pero solo el numero de letras indicado
    cout << strlen ( s1 ) << endl; // Tamano de la cadena
}