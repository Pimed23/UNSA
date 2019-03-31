#include <iostream>
using namespace std;

class Car {

    public:
        Car() {
            cin >> milage;
        }
        ~Car();
    
    private:
        float milage;
};

int main() {
    Car c1, c2;
    return 0;
}
