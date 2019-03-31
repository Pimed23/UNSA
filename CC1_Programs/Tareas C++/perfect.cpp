#include <iostream>
#include <cmath>
using namespace std;

bool numsPerfect( int num ) {
    int divi = 1;
    int r = sqrt( num );
    for( int i = 2; i <= r; ++i ) {
        if(!( num % i ))
            divi += i + num / i; }
    return ( num == divi ); }

int main() {
    int n;
    cin >> n;
    for( int i = 1; n > 0; ++i ) {
        if( numsPerfect( i )) {
            cout << i << endl;
            --n;}}
    return 0;
}
