#include <iostream>
using namespace std;

int main() {
    for( int i = 1; i <= 20; i++ ) {
    cout << i;
        if( i % 3 == 0 )
            cout << " es divisible por 3. " << endl;
        else
            cout << " no es divisible por 3. " << endl;
    }
}