#include <iostream>
using namespace std;

int main() {
    int cuenta, q; // Se declaran dos variables enteras cuenta y q
    int *m; // Se declara un puntero m
    cuenta = 100; // Se le asigna a cuenta el valor de 100
    m = &cuenta; // Se le asigna al puntero m la direccion de la variable cuenta
    q = *m; // Se le asigna a la variable q el contenido de la variable m
    printf("%d", q); // Imprime el valor de 100
    cout << endl;
}
