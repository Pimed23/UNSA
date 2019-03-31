#include <iostream>
using namespace std;

int main() {
    int arr[] = { 2, 1, 3 }; // Definir un array llamado arr con elementos 2, 1, 3
    int *p = arr; // Se le asigna al puntero entero p la direccion del inicio del arreglo
    void *q = arr; // Se le asigna al puntero generalizado q la direccion del inicio del arreglo
    cout << p << endl; // Imprime la direccion de la posicion "0" del arreglo ( inicio de arreglo )
    cout << *p << endl; // Imprime el valor de la primera posicion "0" del arreglo ( inicio de arreglo )
    p++; // Incrementa en 4 bits la direccion de p
    cout << p << endl; // Imprime la direccion de p actual "1"
    cout << *p << endl; // Imprime el valor de la posicion "1" del arreglo
    cout << *( p + 1 ) << endl; // Imprime el valor de la siguiente posicion "2"
    cout << *p + 1 << endl; // Imprime el valor de la posicion "1" incrementado en 1
    cout << *( p + 2 ) << endl; // Imprime el valor que se encuentra en la direccion de memoria que corresponderia a la posicion "3"
    cout << *p + 2 << endl; // Imprime el valor de la posicion "1" incrementado en 2
    cout << *p << endl; // Imprime el valor de la posicion "1" del arreglo
    cout << *p++ << endl; // Imprime el valor de la posicion "1" del arreglo y incrementara la direccion a la posicion "2"
    cout << *p << endl; // Imprime el valor de la posicion "2" del arreglo
    cout << *++p << endl; // Imprime el valor de la direccion que perteneceria a la direccion "3" del arreglo
    cout << *p << endl; // Imprime el valor que corresponderia a la direccion "3" del arreglo
    int a = 10;
    double x = 11.5;
    q = &a;
    cout << q << endl; // Imprime la direccion de la variable a
    q = &x;
    cout << q << endl; // Imprime la direccion de la variable x
}