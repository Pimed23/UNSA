#include <iostream>
using namespace std;

int main() {
    
    int num1, num2;

    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;

    try {
        if( num2 != 0 )
            cout << "Div: " << num1 / num2 << endl;
        else
            throw num2;
    }

    catch( int x ) {
        cout << "Exception caught: Divide by zero " << endl;
    }

}