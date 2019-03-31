//SOBRECARGA DENTRO DE LA CLASE
#include <iostream>
using namespace std;

class Complex {

    public:
        Complex( int _real = 0, int _imag = 0 ) {
            real = _real;
            imag = _imag;
        }
        
        void displayData() {
            cout << "REAL: " << real << endl;
            cout << "IMAG: " << imag << endl;
        }

        Complex operator +( Complex A ) {
            Complex temp;
            temp.real = real + A.real;
            temp.imag = imag + A.imag;
            return temp;
        }

    private:
        int real, imag;
};


int main() {
    Complex C1( 12, 15 );
    Complex C2( 15, 12 );
    Complex C3;
    C1.displayData();
    C2.displayData();
    C3 = C1 + C2;
    C3.displayData();
    return 0;
}