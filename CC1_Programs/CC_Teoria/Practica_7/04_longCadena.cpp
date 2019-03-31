#include <iostream>
using namespace std;

int longitud( char *cad ) {
    long accum;
    for( accum = 0 ; *cad != '\0'; cad++ )
        ++accum;
    return accum;
}

int main() {
    char *cad;
    cad = new char[ 50 ];
    cin.getline( cad, 50 );
    cout << longitud( cad ) << endl;
    delete [] cad;
}