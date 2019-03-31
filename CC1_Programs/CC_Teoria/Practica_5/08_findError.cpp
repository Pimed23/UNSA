#include <iostream>
using namespace std;

int main() {
    double a = 1, *p;
    double x = 2.4;
    p = &a;
    cout << p << endl;
    p = &x; // El ERROR esta en que le estoy asignando a un puntero INT la direccion de una variable FLOAT
    cout << p << endl;
}