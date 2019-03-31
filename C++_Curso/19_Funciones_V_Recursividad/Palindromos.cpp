#include <iostream>
using namespace std;

struct Palabra { 
    char *pal;
    int n;
};

void toUppercase( char * );
bool palindromo( char *, int, int ini = 0 );
int lenght( char * );

int main() {

    Palabra P1;
    char palabra[] = "Madam";

    P1.pal = palabra;
    P1.n = lenght( P1.pal );

    toUppercase( P1.pal );
    cout << palindromo( P1.pal, P1.n ) << endl;

    return 0;
}

int lenght( char *w ) {
    int i = 0;
    while( *( w + i )) i++;
    return i;
}

bool palindromo( char *pal, int fin, int ini ) {
    if( ini >= fin ) return true;
    else if( *( pal + ini ) == *( pal + fin - 1 )) {
        palindromo( pal, ini + 1, fin - 1 );
    }
    else return false;    
}

void toUppercase( char *w ) {
    int i = 0;
    while( *( w + i )) {
        if( *( w + i ) >= 'a' && *( w + i ) <= 'z') {
            *( w + i ) -= 32;
        }
        i++;
    }
}