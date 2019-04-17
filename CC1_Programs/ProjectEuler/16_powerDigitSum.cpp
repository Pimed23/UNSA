#include <iostream>
#include <vector>
using namespace std;

template < typename Type >
void reverse( Type * );


int main() {

    vector<int> res = { 1 };
    int carry = 0, n, pre_prod, acc = 0;
    
    cout << "Ingrese el lim: ";
    cin >> n;
    
    for( int i = 0; i < n; ++i ) {
        for( int j = 0; j < res.size(); ++j ) {
            pre_prod = res[ j ] * 2;      
            if( pre_prod > 9 && j + 1 == res.size()) {
                res.resize( res.size() + 1 );
                res[ j ] = pre_prod % 10 + carry;
                carry = 0;
                ++carry;
            }

            else if( pre_prod > 9 ) {
                res[ j ] = pre_prod % 10 + carry;
                carry = 0;
                ++carry;
            }

            else {
                res[ j ] = pre_prod + carry;
                carry = 0;
            }
        }
    }

    for( int i = 0; i < res.size(); ++i )
        acc += res[ i ];
    
    cout << acc << endl;
 
    return 0;
}