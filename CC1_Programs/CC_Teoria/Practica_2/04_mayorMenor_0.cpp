#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    int mayores = 0, menores = 0, iguales = 0;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    if( n1 > 0 )
        mayores++;
    else if( n1 < 0 )
        menores++;
    else
        iguales++;
    
    if( n2 > 0 )
        mayores++;
    else if( n2 < 0 )
        menores++;
    else
        iguales++;
    
    if( n3 > 0 )
        mayores++;
    else if( n3 < 0 )
        menores++;
    else
        iguales++;

    if( n4 > 0 )
        mayores++;
    else if( n4 < 0 )
        menores++;
    else
        iguales++;

    if( n5 > 0 )
        mayores++;
    else if( n5 < 0 )
        menores++;
    else
        iguales++;

    cout << "Hay " << mayores << " mayores." << endl;
    cout << "Hay " << menores << " menores." << endl;
    cout << "Hay " << iguales << " iguales." << endl;
}