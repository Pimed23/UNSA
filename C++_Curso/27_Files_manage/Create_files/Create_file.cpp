#include <iostream>
#include <fstream>      // Libreria especial para manejo de archivos

using namespace std;

int main() {
    ofstream newfile;
    newfile.open( "Prueba.txt" );
    newfile << "Esto es una prueba de como crear files";
    newfile.close();
    return 0;
}