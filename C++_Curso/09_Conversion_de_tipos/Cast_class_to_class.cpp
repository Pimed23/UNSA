#include <iostream>
using namespace std;

class Alpha {

    public:
        Alpha( int _numA = 0 ) {
            numA = _numA;
        }
        int getValue() {
            return numA;
        }
        void Display() {
            cout << numA << endl;
        }

    private:
        int numA;
};

class Beta {

    public:
        Beta( int _numB = 0 ) {
            numB =  _numB;
        }

        Beta( Alpha A ) {
            numB = A.getValue();
            cout << "CONSTRUCTOR METHOD" << endl;
        }
        
        void Display() {
            cout << numB << endl;
        }

        operator Alpha() {
            cout << "CASTING OPERATOR FUNCTION METHOD" << endl;
            return Alpha( numB );
        }

    private:
        int numB;
};

int main() {

    Alpha A( 15 );
    Beta B;
    A.Display();
    B.Display();
    B = A;

    A = B;
    B.Display();
    
    return 0;
}