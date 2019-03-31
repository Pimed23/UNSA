#include <iostream>
using namespace std;

void crear( int *&v, int n ) {
    v = new int[ n ];
}

void llenar( int *v, int n ) { 
    cout << "Llenando vector... " << endl;
    for( int i = 0; i < n; i++ )
        cin >> *( v + i );
}

void print( int *v, int n ) {
    cout << "Imprimiendo vector... " << endl;
    for( int i = 0; i < n; i++ )
        cout << *( v + i ) << " ";
    cout << endl;
}

void sum( int *v1, int *v2, int *s, int n ) {
    for( int i = 0; i < n; i++ )
        *( s + i ) = *( v1 + i ) + *( v2 + i );
}

void rest( int *v1, int *v2, int *r, int n ) {
    for( int i = 0; i < n; i++ )
        *( r + i ) = *( v1 + i ) - *( v2 + i );
}

void producto( int *v1, int *v2, int *p, int n) {
    for( int i = 0; i < n; i++ )
        *( p + i ) = *( v1 + i ) * (*( v2 + i ));
}

int main() {
    int *v1, *v2, n;
    int *suma, *resta, *prod;
    cout << "Lenght v1: ";
    cin >> n;

    crear( v1, n ); crear( v2, n );
    llenar( v1, n ); llenar( v2, n );
    //SUMA DE VECTORES
    crear( suma, n );
    sum( v1, v2, suma, n );
    print( suma, n );
    delete [] suma;

    //RESTA DE VECTORES
    crear( resta, n );
    rest( v1, v2, resta, n );
    print( resta, n );
    delete [] resta;

    //PRODUCTO DE VECTOR POR UN ESCALAR
    crear( prod, n );
    producto( v1, v2, prod, n );
    print( prod, n );
    delete [] prod;
}