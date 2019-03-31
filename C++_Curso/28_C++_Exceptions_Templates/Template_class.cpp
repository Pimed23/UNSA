#include <iostream>
using namespace std;

template < typename nType >
class Sample {

    public:
        void getData() {
            cin >> a >> b;
        }

        void displayData() {
            cout << "A: " << a << endl;
            cout << "B: " << b << endl;
        }

        nType sumar() {
            return a + b;
        }

    private:
        nType a, b;
};


int main() {
    
    Sample < float > s1;
    s1.getData();
    s1.displayData();
    cout << s1.sumar() << endl;

    return 0;
}