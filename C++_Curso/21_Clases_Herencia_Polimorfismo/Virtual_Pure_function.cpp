#include <iostream>
using namespace std;

#define PI 3.1416

class Shape { // Clase abstracta 

    public:
        virtual float calArea() = 0; // Pure virtual function
};

class Square : public Shape {

    public:
        Square( float l ) {
            lado = l;
        }

        float calArea() {
            return lado * lado;
        }

    private:
        float lado;
};

class Circle : public Shape {

    public:
        Circle( float r ) {
            radio = r;
        }

        float calArea() {
            return PI * radio * radio;
        }
    
    private:
        float radio;

};

int main() {
    Shape *ptr;
    Square S1( 5.5 );
    Circle C1( 6.5 );

    ptr = &S1;
    cout << ptr -> calArea() << endl;

    ptr = &C1;
    cout << ptr -> calArea() << endl;



    return 0;
}