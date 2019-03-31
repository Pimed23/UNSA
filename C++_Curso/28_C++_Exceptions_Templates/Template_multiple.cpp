#include <iostream>
using namespace std;

template < class T1, class T2 >
class Sample {

    public:
        Sample( T1 x, T2 y ) {
            a = x;
            b = y;
        }

        void disp() {
            cout << "NumA: " << a << endl;
            cout << "NumB: " << b << endl;
        }

        void Sumar() {
            cout << a + b << endl;
        }
    
    private:
        T1 a;
        T2 b;
};


int main() {

    Sample < int, float > S1( 12, 14.5 );
    Sample < char, int > S2( 'N', 10 );

    S1.disp();
    S1.Sumar();
    S2.disp();
    S2.Sumar();

    return 0;
}