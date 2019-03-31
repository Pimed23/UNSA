#include <iostream>
using namespace std;

bool pot_2( int );

int main() {
    int num;
    cin >> num;
    cout << pot_2( num ) << endl;
    return 0;
}

bool pot_2( int x ) {
    while( x != 2 ) {
        x = x >> 1;
        if( x & 1 ) // Si x es impar 
            return false;
    }
    return true;
}