#include <iostream>
using namespace std;

int main() {
    // el puntero *p ocupa 2 bytes
    // todos los punteros ocupan 2 bytes en la memoria
    // debido a que lo que almacenan es una direccion
    float *p = new float; // new float almacena 4 bytes
    *p = 55;
    cout << "value: " << *p << endl;
    cout << "address: " << p << endl;
    
    cout << "size: " << sizeof( *p ) << endl;
    cout << "size ptr: " << sizeof( p ) << endl;
    delete[] p;
    
    float newLocation = 10;
    p = &newLocation;

    cout << "value: " << *p << endl;
    cout << "address: " << p << endl;
    cout << "size: " << sizeof( *p ) << endl;
    cout << "size ptr: " << sizeof( p ) << endl;
    
    return 0;
}