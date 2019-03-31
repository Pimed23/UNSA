#include <iostream>
using namespace std;

int main(){
    for( int i = 'A'; i <= 'Z'; i++ ) {
        cout << ( char )( i ) << " " << ( char )( i + 32 ) << endl;
    }
}