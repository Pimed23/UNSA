#include <iostream>
using namespace std;

int main() {
    int n, r;
    cin >> n;
    r = n;
    for( int i = 0; i < n; i++ ) {
        cout << r << " ";
        r = r + n; }
    cout << endl;
}