#include <iostream>
using namespace std;

int main() {

    int a = 25, *p, **r;
    p = &a;
    r = &p;

    cout << "&a: " << &a << endl;
    cout << "p: " << p << endl;
    cout << "*r: " << *r << endl;
    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl;
    cout << "**r: " << **r << endl;
    cout << "&p: " << &p << endl;
    cout << "r: " << r << endl;
    
    return 0;
}
