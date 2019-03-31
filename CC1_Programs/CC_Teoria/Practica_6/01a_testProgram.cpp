#include <iostream>
using namespace std;

int main() {
    int a = 6; // Asigna a la variable "a" el valor de 6
    int *b = &a; // Asigna al puntero b la direccion de la variable "a"
    int &r = a; // Asigna a la variable por referencia r en contenido de "a"
    cout << a << " " << *b << endl; // 6 6
    cout << &a << " " << b << endl; // Direccion a = b
    r++; // Incremento en una r al estar por referencia incrementa a y b tambien
    cout << a << " " << *b << " " << r << endl; // 7 7 7
    *b = 10; // Asigno al contenido del puntero de b el valor de 10 cambia tambien a y r
    cout << a << " " << *b << " " << r << endl; // 10 10 10
}