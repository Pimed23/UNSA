#include <iostream>
using namespace std;

int main() {
    float x, y;
    float *p;
    x = 123.50;
    p = &x; // El ERROR esta en que le estoy asignando a un puntero INT la direccion de una variable FLOAT
    y = *p;
    printf( "%.2f", y );
    cout << endl;
}