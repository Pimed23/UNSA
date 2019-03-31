#include "polygon.h"
#include "polygonArray.h"
#include <iostream>
using namespace std;

int main(){
    polygon p( 1, 3 );
    polygon q( 4, 5 );
    polygon r( 3, 2 );
    polygon arr[] = { p, q, r };

    int size = sizeof( arr ) / sizeof( arr[ 0 ]);
    polygonArray pa( arr, size );
    polygon s( 1, 5 );
    pa.remove( 1 );
    pa.push_back( q );
    pa.print();
}