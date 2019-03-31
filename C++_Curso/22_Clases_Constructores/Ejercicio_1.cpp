#include <iostream>
using namespace std;

class Rectangulo {
    
    public:
        Rectangulo( int l = 0, int a = 0 ) : largo( l ), ancho( a ) {}

        int Perimetro();
        int Area();

    private:
        int largo;
        int ancho;
};

int Rectangulo::Perimetro() {
    int perimetro;
    perimetro = 2 * largo + 2 * ancho;
    return perimetro;
}

int Rectangulo::Area() {
    int area;
    area = largo * ancho;
    return area;
}

int main() {
    Rectangulo R1( 11, 7 );
    Rectangulo R2( 3, 4 );

    cout << "Perimetro R1: " << R1.Perimetro() << endl;
    cout << "Perimetro R2: " << R2.Perimetro() << endl;

    cout << "Area R1: " << R1.Area() << endl;
    cout << "Area R2: " << R2.Area() << endl;

    return 0;
}