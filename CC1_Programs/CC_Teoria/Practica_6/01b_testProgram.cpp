#include <iostream>
using namespace std;

void fu( int valor, int &alias, int *punt, int *ptr ) { // Se declara la funcion fu y sus parametros
    valor++; // Incrementa en 1 valor
    alias++; // Incrementa en 1 alias
    ( *punt )++; // Incrementa en 1 el contenido de punt
    ( *ptr )++; // Incrementa en 1 el contenido de ptr
}

int main() {
    int x = 6, y = 7, z = 8, *pt = &x;  // Se declaran e inicializan las variables
    cout << x << " " << y << " " << z << " " << *pt << endl; // Imprime los valores de las variables
    fu( x, y, &z, pt ); // Se llama a la funcion fu y recibe los parametros de las variables
    cout << x << " " << y << " " << z << " " << *pt << endl; // Imprime los valores despues de aplicar la funcion fu
}