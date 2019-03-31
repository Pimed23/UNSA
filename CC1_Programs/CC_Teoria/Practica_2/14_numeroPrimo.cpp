#include <iostream>
using namespace std;

bool esPrimo( int num ) {
    int acc = 0;
    for( int i = 1; i <= num; i++ ) {
        if(( num % i ) == 0 )
            acc++;}
    if( acc == 2 )
        return true;
    else
        return false;
}

int main() {
    int num;
    cin >> num;
    if( esPrimo( num ))
        cout << "El numero ES PRIMO" << endl;
    else
        cout << "El numero NO ES PRIMO" << endl;
}