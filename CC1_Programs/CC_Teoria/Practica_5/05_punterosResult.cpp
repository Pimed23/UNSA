#include <iostream>
using namespace std;

int main() {
    int a = 100; // Se le asigna a la variable a el valor de 100
    int *p = &a; // Asigna a un puntero p la direccion de la variable a
    cout << a << endl; // Imprime el valor de a
    cout << p << endl; // Imprime la direccion de p
    cout << *p << endl; // Imprime el contenido de la direccion que apunta p
    cout << &a << endl; // Imprime la direccion de a
}