#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int p_saco, camion, carga, sacos;
    srand( time( NULL ));
    for( int i = 0; i < 20; i++ ) {
        sacos = 0;
        carga = 0;
        camion = 18000 + rand() % ( 18000 - 28000 );
        while( true ) {
            p_saco = 3000 + rand() % ( 3000 - 9000 );
            carga = carga + p_saco;
            if ( carga > camion ) {
                carga -= p_saco;
                break; }
            cout << "CARGAR" << endl;
            sacos++;}
        cout << "DESPACHAR" << endl; 
        cout << "El camion sale con: " << sacos << " sacos" <<endl;
        cout << "Y con " << carga << " kilogramos" << endl;}
}