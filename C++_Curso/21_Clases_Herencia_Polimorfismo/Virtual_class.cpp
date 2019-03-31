// VIRTUAL CLASS
#include <iostream>
using namespace std;

class Car {
    public:
        void display1() {
            cout << "Car Class" << endl;
        }
};

class FuelCar : virtual public Car {
    public:
        void display2() {
            cout << "FuelCar Class" << endl;
        }
};

class ElectricCar : virtual public Car {
    public:
        void display3() {
            cout << "ElectricCar Class" << endl;
        }
};

class HybridCar : public FuelCar, public ElectricCar {
    public:
        void display4() {
            cout << "HybridCar Class" << endl;
        }
};


int main() {
    cout << "CAR" << endl;
    Car C1;
    C1.display1();
    cout << "FUEL CAR" << endl;
    FuelCar F1;
    F1.display1();
    F1.display2();
    cout << "ELECTRIC CAR" << endl;
    ElectricCar E1;
    E1.display1();
    E1.display3();
    cout << "HYBRID CAR" << endl;
    HybridCar H1;
    H1.display1();
    H1.display2();
    H1.display3();
    H1.display4();

    return 0;
}