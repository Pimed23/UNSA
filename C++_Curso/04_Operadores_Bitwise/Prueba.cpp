#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if( num & 1 ) cout << "Impar" << endl;
    else cout << "Par" << endl;

    return 0;
}