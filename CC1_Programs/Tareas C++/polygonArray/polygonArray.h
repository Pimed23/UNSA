#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "polygon.h"

class polygonArray {
    protected:
        int size;
        polygon *pol;
        void resize( int );
    public:
        polygonArray();
        polygonArray( const polygon poly[], const int size );
        polygonArray( const polygonArray &p );
        ~polygonArray();

        polygon getPolygon();
        int getSize();
        void clear();
        void push_back( const polygon &p );
        void insert( const int, const polygon &p );
        void remove( const int );
    
};
#endif