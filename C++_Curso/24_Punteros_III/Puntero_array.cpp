#include <iostream>
using namespace std;

int main() {

    int arr1[ 5 ] = { 0, 1, 2, 3, 4 };
    float arr2[ 5 ] = { .2, .3, .4, .5, .6 };

    int *intPtr;
    float *floatPtr;

    intPtr = arr1;
    floatPtr = arr2;

    cout << "INT ARRAY " << endl;
    for( int i = 0; i < 5; i++ ) {
        cout << "*( intPtr + " << i << " ): " << *( intPtr + i ) << endl;
    }

    cout << "FLOAT ARRAY " << endl;
    for( int i = 0; i < 5; i++ ) {
        cout << "*( floatPtr + " << i << " ): " << *( floatPtr + i ) << endl;
    }


    return 0;
}