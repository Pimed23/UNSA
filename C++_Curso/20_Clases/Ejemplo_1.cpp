#include <iostream>
using namespace std;

class Car {

    public:
        void setter( int _price, float _milage ) {
            price = _price;
            milage = _milage;
        }

        void getter() {
            cout << "PRICE:  " << price << endl;
            cout << "MILAGE: " << milage << endl;
        }

        void start();
        void drive();

    private:
        int price;
        float milage;

};

int main() {
    Car c1;
    c1.setter( 10, 14.5 );
    c1.getter();
    c1.setter( 2, 1.5 );
    c1.getter();

    return 0;
}
