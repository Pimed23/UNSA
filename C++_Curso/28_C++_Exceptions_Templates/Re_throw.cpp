#include <iostream>
using namespace std;

void Division( double num1, double num2 ) {

    try {
        if( num2 == 0 )
            throw num2;
        else
            cout << num1 / num2 << endl;
    }

    catch( double ) {
        cout << "Double caught inside function" << endl;
        throw;
    }
}


int main() {

    try {
        Division( 15, 5 );
        Division( 14, 0 );
    }
    
    catch( double ) {
        cout << "Double caught inside main function " << endl;
    }
    
    return 0;
}