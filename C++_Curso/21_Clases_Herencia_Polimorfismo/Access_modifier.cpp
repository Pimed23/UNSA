#include <iostream>
using namespace std;

class Base {

    private:
        int x;
    public:
        int y;
    protected:
        int z;
};

class publicDerived : public Base {
    // x es inaccesible
    // y es public
    // z es protected
};

class privateDerived : private Base {
    // x es inaccesible
    // y es private
    // z es private
};

class protectedDerived : protected Base {
    // x es inaccesible
    // y es protected
    // z es protected
};

int main() {

    return 0;
}