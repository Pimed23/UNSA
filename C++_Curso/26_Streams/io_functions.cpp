// cin.get                            obtiene un caracter
// cout.put                           imprime un caracter
// cin.getline("text", size )         obtiene una secuencia de caracteres
// cout.write("text", size )          imprime un string pero si el tamano es mejor imprime toda la basura restante
// cin >>                             obtiene strings que no contienen espacios
// cout << 

#include <iostream>
using namespace std;

int main() {
    /*
    char ch;
    cin.get( ch );
    ch = cin.get();
    cin >> ch;
    cout.put( ch );
    */

    char c[ 20 ];
    cout << "Enter name: ";
    cin.getline( c, 20 );
    cout.write( c, 20 );
    cout << endl;

    cin >> c;
    cout << c << endl;

    return 0;
}