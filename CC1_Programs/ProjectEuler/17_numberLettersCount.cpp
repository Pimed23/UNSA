#include <iostream>
using namespace std;

int countLetter( int );

int one_to_nineteen[ 19 ] = { 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
int twe_to_ninety[ 8 ] = { 6, 6, 5, 5, 5, 7, 6, 6 };
int hun_to_thou[ 3 ] = { 3, 7, 8 };

int main() {

    int acc = 0;
    for( int i = 1; i <= 1000; ++i )
        acc += countLetter( i );
    
    cout << acc << endl;

    return 0;
}

int countLetter( int num ) {

    int acc = 0;
    bool control = false;

    int n_thou = num / 1000;

    if( n_thou > 0 ) {
        acc += one_to_nineteen[ n_thou - 1 ];
        acc += hun_to_thou[ 2 ];
    }

    num = num % 1000;

    int n_hund = num / 100;

    if( n_hund > 0 ) {
        acc += one_to_nineteen[ n_hund - 1 ];
        acc += hun_to_thou[ 1 ];
        control = true;
    }

    num = num % 100;

    int n_deci = num / 10;

    if( num > 0 ) {
        if( control )
            acc += hun_to_thou[ 0 ];
        
        if( num <= 19 )
            acc += one_to_nineteen[ num - 1 ];
        
        else {
            acc += twe_to_ninety[ n_deci - 2 ];
            num = num % 10;

            if( num > 0 )
                acc += one_to_nineteen[ num - 1 ];
        }
    }
    
    return acc;
}
