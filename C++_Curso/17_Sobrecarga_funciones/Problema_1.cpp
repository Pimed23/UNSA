#include <iostream>
#include <limits.h>

using namespace std;
 
int mayor( int a, int b = INT_MIN, int c = INT_MIN, int d = INT_MIN ); 
 
int main() {
   cout << mayor( -1, -2 ) << endl;
   cout << mayor( 5 ) << endl;

   return 0; 
}
 
int mayor( int a, int b, int c, int d ) {
    int m1, m2;
    ( a > b ) ? m1 = a : m1 = b;
    ( c > d ) ? m2 = c : m2 = d;
    if( m1 > m2 ) return m1;
    else return m2;
}