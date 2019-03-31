#include <iostream>
using namespace std;

int mcd( int x, int y ) {
    if ( y == 0 )
        return x;
    else
        return mcd( y, x % y ); }

int main() {
    int a, b;
    float r;
    cout << "Ingrese el primer numero: " << endl;
    cin >> a;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;
    if ( a > b )
        r = mcd( a, b );
    else 
        r = mcd( b, a );
    cout << "El MCD sera: " << r << endl;
    return 0;
}

