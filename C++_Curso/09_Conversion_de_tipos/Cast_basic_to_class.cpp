#include <iostream>
using namespace std;

class Convert {

    public:
        Convert( int x = 0 ) {
            int_type = x;
        }
        void Display() {
            cout << int_type << endl;
        }
        
    private:
        int int_type;
};

int main() {

    Convert C1;
    int r = 15;
    C1.Display();
    C1 = r;
    C1.Display();
    return 0;
}