#include <iostream>
using namespace std;

int main() {
    void *p; // No se puede desreferenciar un puntero void
    double x = 2.5; 
    p = &x; // No se puede utilizar el contenido
    cout << p << endl;
}