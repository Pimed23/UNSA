#include <iostream>
#include <fstream>      // Libreria especial para manejo de archivos

using namespace std;

int main() {
    ifstream r;
    char name[ 50 ]; // Aqui almacenaremos los datos del archivo
    r.open( "Hello_world.txt" );
    r.getline( name, 50 );
    cout << "NameContent: " << name << endl;
    r.close();
    return 0;
}