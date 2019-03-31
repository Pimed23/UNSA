#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void sustituir( char *cad, char c ) {
    // int i = 0;
    // while(*( cad + i ))
    for( int i = 0; *( cad + i ) != '\0'; i++ ) {
        if(*( cad + i ) == ' ' )
            *( cad + i ) = c;
        cout << *( cad + i );}
    // i++;
}

int main() {
    char c, *cad = new char[ 20 ];
    cin.getline(cad, 20);
    cin >> c;
    sustituir( cad, c );
    delete [] cad;
    cout << endl;
}