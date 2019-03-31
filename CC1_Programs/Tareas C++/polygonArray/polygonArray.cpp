#include <iostream>
#include "polygonArray.h"
using namespace std;

polygonArray::polygonArray() {
    this -> size = 0;
    this -> pol = new polygon[ size ];
}

polygonArray::polygonArray( const polygon poly[], const int size ) {
    this -> size = size;
    this -> pol = new polygon[ size ];
    for( int i = 0; i < size; i++ )
        pol[ i ] = poly[ i ];
}

polygonArray::polygonArray( const polygonArray &p ) {
    this -> size = p.size;
    this -> pol = new polygon[ size ];
    for( int i = 0; i < size; i++ )
        pol[ i ] = p.pol[ i ];
}

polygon polygonArray::getPolygon() {
    return *pol;
}

int polygonArray::getSize() {
    return size;
}

void polygonArray::resize( int newSize ) {
	polygon *poly = new polygon[ newSize ];
	int minsize = ( newSize > size ) ? size : newSize;
	for( int i = 0; i < minsize; i++ )
		poly[ i ] = pol[ i ];
	delete[] pol;
	size = newSize;
	pol = poly;
}

void polygonArray::clear() {
    resize( 0 );
}

void polygonArray::push_back( const polygon &p ) {
	resize( size + 1 );
	pol[ size - 1 ] = p;
}

void polygonArray::insert( const int pos, const polygon &p ) {
	resize( size + 1 );
	for( int i = size - 1; i < pos; i--)
		pol[ i ] = pol[ i - 1 ];
	pol[ pos ] = p;		
}

void polygonArray::remove( int pos ) {
	for( int i = 0; i < size - 1; i++ ) {
		pol[ pos ] = pol[ pos + 1 ];
		resize( size - 1 );
}
		
polygonArray::~polygonArray() {
    delete[] pol;
}

