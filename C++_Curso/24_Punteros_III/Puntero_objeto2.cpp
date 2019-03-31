#include <iostream>
using namespace std;

class Prueba {

    public:
        Prueba( int _i ) {
            i = _i;
        }
        int getData() {
            return i;
        }

    private:
        int i;

};


int main() {
    Prueba P1( 5 );
    Prueba *P1Ptr;
    P1Ptr = &P1;
    cout << "P1Ptr->getData(): " << P1Ptr->getData() << endl;
    
    Prueba P2[ 3 ] = { 15, 14, 12 };
    Prueba *P2Ptr;
    P2Ptr = P2;

    for( int i = 0; i < 3; i++ ) {
        cout << P2Ptr->getData() << endl;
        P2Ptr++;    
    }
    return 0;
}