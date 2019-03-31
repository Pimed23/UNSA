#ifndef POLYGON_H
#define POLYGON_H

class polygon {
    protected:
        int width, height;
    public:
        polygon();
        polygon( const int, const int);
        polygon( const polygon &p );

        void polygonPrint();
        void polygonArea();
};
#endif