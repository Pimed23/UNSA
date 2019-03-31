#include <iostream>
using namespace std;

template < typename T >
T sumar( T a, T b ){
    return a + b;
}


int main() {

    float num1 = 10.4, num2 = 14.3;
    cout << sumar( num1, num2 ) << endl;

    int num3 = 2, num4 = 5;
    cout << sumar( num3, num4 ) << endl;

    return 0;
}