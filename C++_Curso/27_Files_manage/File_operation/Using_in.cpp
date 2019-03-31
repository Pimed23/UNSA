#include <iostream>
#include <fstream>
using namespace std;

int main() {

    char content[ 50 ];
    ifstream arch;
    arch.open( "Prueba_out.txt", ios::in );
    arch.getline( content, 50 );
    cout << content << endl;
    arch.close();
    return 0;
}