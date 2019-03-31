#include <iostream>
using namespace std;

bool Palindromo( char palabra[ 40 ]);
int Tamano( char palabra[ 40 ]);

int main() {
    char palabra[ 40 ];
    cin >> palabra;
    cout << Palindromo( palabra ) << endl;
}

int Tamano( char palabra[ 40 ]) {
    int tam = 0;
    for( int i = 0; palabra[ i ] != '\0'; i++ ) {
        tam = tam + 1;
    }
    return tam;
}

bool Palindromo( char palabra[ 40 ]) {
    int tam;
    tam = Tamano( palabra );
    for( int i = 0; i < tam / 2; i++ ) {
        if( palabra[ i ] != palabra[ tam - i - 1]) {
            return false;
        }
    }
    return true;
}
