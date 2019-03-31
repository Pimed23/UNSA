#include <iostream>
using namespace std;

void crear( int *&v, int n ) {
    v = new int [ n ];
} 

void llenar( int *v, int n ) {
    cout << "Llenando el vector...\n";
    for( int i = 0; i < n; i++ )
        //cin >> v[ i ];
        cin >> *( v + i );
}

void print( int *v, int n ) {
    cout << "Imprimiendo el vector...\n";
    for( int i = 0; i < n; i++ )
        //cout << v[ i ];
        cout << *( v + i ) << " ";
}

int main() { 
    int *v1, *v2, *v3;
    crear( v1, 3 ); crear( v2, 5 ); crear( v3, 6 );
    llenar( v1, 3 ); llenar( v2, 5 ); llenar( v3, 6 );
    print( v1, 3 ); 
    cout << endl;
    print( v2, 5 ); 
    cout << endl;
    print( v3, 6 );
    cout << endl;
}