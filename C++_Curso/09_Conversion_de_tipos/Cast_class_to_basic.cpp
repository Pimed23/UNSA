#include <iostream>
using namespace std;

class Casting {

    public:
        Casting( float r = 0.0 ) {
            a = r;
        }

        operator int() {
            int x;
            x = a;
            return x;
        }

    private:
        float a;
};

int main() {

    Casting C1( 10.23 );
    int C = C1;
    cout << C << endl;
    return 0;
}