#include <iostream>
using namespace std;

int main() {
    long num = 0;
    for( int i = 1; i <= 15; i++ ) {
        num = num * 10 + i;
        cout << num << endl;}
}