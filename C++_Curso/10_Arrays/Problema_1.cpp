#include <iostream>
using namespace std;

int main() {
    int array[ 10 ];
    int sum = 0, mayor, menor;
    float prom;

    for( int i = 0; i < 10; i++ ) {
        cin >> array[ i ];
        sum = sum + array[ i ];

        if( i == 0 ) {
            mayor = array[ i ];
            menor = array[ i ];
        }

        if( mayor < array[ i ])
            mayor = array[ i ];

        if( menor > array[ i ])
            menor = array[ i ]; 
    }

    prom = sum / 10.0;

    cout << "La suma es: " << sum << endl;
    cout << "El promedio es: " << prom << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}