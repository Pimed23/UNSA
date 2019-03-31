#include <iostream>
using namespace std;

void Divisible3( int );

int main() {
    int i = 0;
    while( ++i <= 20 ) {
        cout << i;
        Divisible3( i );
    }
}

void Divisible3( int num ) {
    if( num % 3 == 0 )
        cout << " es divisible por 3. " << endl;
    else
        cout << " no es divisible por 3. " << endl;
    
}