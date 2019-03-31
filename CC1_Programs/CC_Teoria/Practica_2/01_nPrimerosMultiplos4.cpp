#include <iostream>
using namespace std;
int main(){
    int multiplos, n;
    cin >> n;
    for( int i = 1; i <= n; i++ ) {
        multiplos = 4 * i;
        cout << multiplos << " "; }
    cout << endl;
    return 0;
}