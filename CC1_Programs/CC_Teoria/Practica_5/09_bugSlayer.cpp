#include <iostream>
using namespace std;

int main() {
    void *p;
    int a = 1;
    double x = 2.4;
    p = &a;
    cout << p << endl;
    p = &x;
    cout << p << endl;
    // Es VALIDO porque el puntero VOID es un puntero general
}