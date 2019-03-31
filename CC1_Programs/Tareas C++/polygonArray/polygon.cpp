#include "polygon.h"
#include <iostream>
using namespace std;

polygon::polygon() {
    width = 0;
    height = 0;
}

polygon::polygon( const int w , const int h ) {
    width = w;
    height = h;  
}

polygon::polygon( const polygon &p ) {
    width = p.width;
    height = p.height;
}

void polygon::polygonPrint() {
    cout << "( " << width << ", " << height << " )" << endl;
}

void polygon::polygonArea() {
    cout << width * height << endl;
}