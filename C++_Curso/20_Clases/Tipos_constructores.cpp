#include <iostream>
using namespace std;

class Test {

    public:
        Test() {
            cout << "DEFAULT CONSTRUCTOR " << endl;
            x = 0;
            y = 0;
        }

        Test( int _x, int _y ) {
            cout << "PARAMETER CONSTRUCTOR " << endl;
            x = _x;
            y = _y;
        }

        Test( Test &obj ) {
            cout << "COPY CONSTRUCTOR " << endl;
            x = obj.x;
            y = obj.y;
        }

        void display() {
            cout << "x: " << x << endl;
            cout << "y: " << y << endl;
        }
    private:
        int x, y;

};


int main() {
    Test t1;
    t1.display();
    Test t2( 4, 5 );
    t2.display();
    Test t3( t2 );
    t3.display();
    return 0;
}