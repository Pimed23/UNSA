#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int num, acc = 0;
    srand( time( NULL ));

    for ( int i = 0; i < 50; i++ ) {
        num = 1 + rand() % 6;
        if ( num == 1 )
            acc++; }
    cout << acc << endl;
}