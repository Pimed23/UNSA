#include <iostream> 
using namespace std; 

int multi( int, int );
int sumar( int, int );

int main() 
{ 
    int a, b;
    cout << "Numero 1: ";
    cin >> a;
    cout << "Numero 2: ";
    cin >> b;
    cout << multi( a, b ) << endl;
    return 0; 
} 


int sumar( int a, int b ) {
    int suma = a ^ b;
    int carry = ( a & b ) << 1;
    if( carry == 0 )
        return suma;
    else
        return sumar( suma, carry );
}

int multi( int a, int b ) {
    int r = 0;
    while ( b > 0 ) {
        if ( b & 1 ) 
            r = sumar( r, a );
        a = a << 1; 
        b = b >> 1; 
     } 
     return r;
} 
