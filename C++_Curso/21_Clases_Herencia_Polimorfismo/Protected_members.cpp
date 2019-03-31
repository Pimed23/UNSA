#include <iostream>
using namespace std;

class ABC {

    public:
        void setProtMem( int i ) {
            m_protMemb = i;
        }
        void Display() {
            cout << "m_protMemb: " << m_protMemb << endl;
        }
    protected:
        int m_protMemb;
        void ProtecFunc() {
            cout << "Access Allowed " << endl;
        }
};

class XYZ : public ABC {

    public:
        void useProtFun() {
            ProtecFunc();
        }
};

int main() {
    ABC a;
    a.setProtMem( 5 );
    a.Display();
    XYZ x;
    x.setProtMem( 7 );
    x.Display();
    x.useProtFun();


    return 0;
}