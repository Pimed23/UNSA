#include <iostream>
using namespace std;

int main() {
    // y el puntero en 2 bytes tmb
    int *p = new int; // new int almacena 2 bytes
    *p = 5; 
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "&p: " << &p << endl;
    delete[] p;

    return 0;
}