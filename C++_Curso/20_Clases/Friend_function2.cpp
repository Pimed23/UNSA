#include <iostream>
using namespace std;

class B;

class A {

    public:
        A( int _numA ) {
            numA = _numA;
        }
        friend void sum( A, B );

    private:
        int numA;
};
 
class B {

    public:
        B( int _numB ) {
            numB = _numB;
        }
        friend void sum( A, B );

    private:
        int numB;
};

void sum( A n1, B n2 ) {
    cout << n1.numA + n2.numB << endl;
}

int main() {
    A x( 15 );
    B y( 13 );
    sum( x, y );
    return 0;
}