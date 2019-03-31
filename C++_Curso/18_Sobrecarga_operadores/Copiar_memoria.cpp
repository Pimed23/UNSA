// Asignación de arrays
// (C) 2009 Con Clase
// Salvador Pozo
#include <iostream>
using namespace std;

struct tipo {
    int *mem;
};

void asignar(tipo&, tipo&);

int main() {
    tipo a, b;

    a.mem = new int[10];
    b.mem = 0;
	
    for(int i = 0; i < 10; i++) a.mem[i] = 0;

    asignar(b, a);
 
    cout << "b: ";
    for(int i = 0; i < 10; i++) cout << b.mem[i] << ",";
    cout << endl;

    b.mem[2] = 1;

    cout << "a: ";
    for(int i = 0; i < 10; i++) cout << a.mem[i] << ",";
    cout << endl;

    cout << "b: ";
    for(int i = 0; i < 10; i++) cout << b.mem[i] << ",";
    cout << endl;

    delete[] a.mem;
    delete[] b.mem;
    return 0;
}

void asignar( tipo &a, tipo &b ) {
    if( &a != &b ) {
        if( a.mem ) delete[] a.mem;
        a.mem = new int[10];
        for(int i = 0; i < 10; i++) a.mem[i] = b.mem[i];
    }
}