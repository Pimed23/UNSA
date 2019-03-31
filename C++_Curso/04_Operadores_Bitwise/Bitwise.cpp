#include <iostream>
using namespace std;

int bitwise( int );

int main() {
    int x;
    cout << "Numero: ";
    cin >> x;
    cout << bitwise( x ) << endl;
    return 0;
}

int bitwise( int a ) {
    return a >> 1;
}