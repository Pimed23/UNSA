#include <iostream>
using namespace std;

class ABC {

    public:
        int a = 5;
};

int main() {
    
    ABC x;
    ABC *xPtr;

    xPtr = &x;
    cout << "x.a: " << x.a << endl;
    cout << "xPtr->a: " << xPtr->a << endl; // Al usar punteros el operador (.)
                                            // Cambia por (->)

    return 0;
}