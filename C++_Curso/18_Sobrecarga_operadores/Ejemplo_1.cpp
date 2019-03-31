// Suma de arrays
// (C) 2009 Con Clase
// Salvador Pozo

#include <iostream>
using namespace std;

struct array {
    int *v; // Elementos
    int n;  // Número de elementos
};

array operator +(array, array);
void Mostrar(array);

int main() {
    array v1, v2, v3;

    v1.n = v2.n = 10;
    v1.v = new int[v1.n];
    v2.v = new int[v2.n];

    for(int i = 0; i < 10; i++) {
        v1.v[i] = i;
        v2.v[i] = 2*i-4;
    }
    v3 = v1 + v2;

    cout << "v1: ";
    Mostrar(v1);
    cout << "v2: ";
    Mostrar(v2);
    cout << "v3 = v1+v2: ";
    Mostrar(v3);
    
    delete[] v1.v;
    delete[] v2.v;
    delete[] v3.v;
    return 0;
}

array operator +(array a, array b) {
    array temp;

    if(a.n == b.n) {
        temp.n = a.n;
        temp.v = new int[temp.n];
        for(int i = 0; i < temp.n; i++) temp.v[i] = a.v[i]+b.v[i];
    } else {
        temp.v = 0;
        temp.n = 0;
    }
    return temp;
}

void Mostrar(array v) {
    for(int i = 0; i < v.n; i++) {
        cout << v.v[i] << ((i < v.n-1) ? "," : "");
    }
    cout << endl;
}