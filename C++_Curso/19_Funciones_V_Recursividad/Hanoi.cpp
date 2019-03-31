#include <iostream>
using namespace std;

int hanoi( int n ); 

int main() {
    cout << hanoi( 4 ) << endl;
}

int hanoi( int n ) {
    if( n == 1 ) return 1;
    else if( n > 1 ) return 2 * hanoi( n - 1 ) + 1;
}