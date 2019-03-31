#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream arch1, arch2, arch3;
    arch1.open( "File1.txt", ios::in | ios::out | ios::app );
    arch2.open( "File2.txt", ios::in );
    arch3.open( "File3.txt", ios::app );

    char c1, c2;
    
    while( !arch1.eof()) {
        arch1.get( c1 );
        arch3.put( c1 );
    }

    arch1.close();

    while( !arch2.eof()) {
        arch2.get( c2 );
        arch3.put( c2 );
    }

    arch2.close();
    arch3.close();

    return 0;
}