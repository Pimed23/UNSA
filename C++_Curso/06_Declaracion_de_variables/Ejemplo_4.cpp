#include <iostream>
using namespace std;

int main() {
    int i = 1;
    bool operar = true;
    while( i != 23 ) {
        cout << i << ", ";
        if( operar )
            i += 4;
        else
            i -= 2;
        operar = !operar;
    }
    cout << i << endl;
}