//SOBRECARGA OPERADORES UNITARIOS ++ 
#include <iostream>
using namespace std;

class Coord3D {
    
    public:
        Coord3D( int, int, int );
        void operator ++();
        void operator ++( int r );
        void display();

    private:
        int x, y, z;
};

Coord3D::Coord3D( int _x, int _y, int _z ) {
    x = _x;
    y = _y;
    z = _z;
}

void Coord3D::operator ++() {
    ++x;
    ++y;
    ++z;
}


void Coord3D::operator ++( int r ) {
    x++;
    y++;
    z++;
}

void Coord3D::display() {
    cout << x << ", " << y << ", " << z << endl;
}

int main() {
    Coord3D C1( 1, 2, 3 );
    C1.display();
    ++C1;
    C1.display();
    C1++;
    C1.display();
    return 0;
}