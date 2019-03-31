#include <iostream>
using namespace std;

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

int main(){
    int n;
    cin >> n;
    int *p = new int[ n ];
    llenar( p , n );
    print( p, n );
    cout << endl;
}