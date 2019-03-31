#include <iostream> 
using namespace std;

int main() {
    int n, arr[ n ];
    cin >> n;
    for( int i = 0; i < n; i++ )
        arr[ i ] = i + 1;
    for( int j = 0; j < n; j++ )
        cout << arr[ j ] << endl;
    return 0;
}