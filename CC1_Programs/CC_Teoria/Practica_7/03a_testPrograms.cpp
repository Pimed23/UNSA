#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void sustituir( char *cad, char c ) {
    while( *cad != '\0' ) {
        if( *cad == ' ')
            *cad = c;
        cout << *cad;
        cad++;}
}

int main() {
    char c, *cad = new char[ 20 ];
    cin.getline(cad, 20);
    cin >> c;
    sustituir( cad, c );
    delete [] cad;
    cout << endl;
}