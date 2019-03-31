#include <iostream>
using namespace std;
int main() {
    int num, acc = 0;
    cout << "Ingrese n numeros a sumar: " << endl;
    while( num != 0 ) {
        cin >> num;
        acc = acc + num; }
    cout << "La suma es " << acc << endl;
}