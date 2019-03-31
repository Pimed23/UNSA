#include <iostream>
using namespace std;

int main(){
    char* cad1, cad2;
    // Declara 2 punteros a caracteres ( V )
    // El intento de desreferenciar un no apuntador es un error de sintaxis ( V )
    int x;
    int * const ptr = &x;
    // Ptr es un apuntador constante hacia un entero ( V )
    // Se puede modificar un entero a traves de ptr ( F )
    // Ptr puede apuntar a diferente localidades de la memoria si se le asigna ( F )
    const int *const pts = &x;
    // Ptr es un apuntador constante a un puntero constante ( V )
    // Ptr siempre apunta a la misma localidad de la memoria ( V )
    // El entero de dicha localidad no puede ser modificado ( F )
    x = 5;
    cout << x << endl;
    cout << *ptr << endl;
    cout << *pts << endl;
    x = 7;
    cout << x << endl;
    cout << *ptr << endl;
    cout << *pts << endl;
}