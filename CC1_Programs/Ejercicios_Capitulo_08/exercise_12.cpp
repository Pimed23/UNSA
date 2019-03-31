// PROGRAMA DE LA LIEBRE Y LA TORTUGA

#include <iostream>
using namespace std;

void moverTortuga( int *tortugaPtr, int rnd ) {
    if( rnd <= 5 ) 
        *tortugaPtr += 3;
    else if ( rnd <= 7 )
        *tortugaPtr -= 6;
    else 
        *tortugaPtr += 1;
    if ( *tortugaPtr < 1 )
        *tortugaPtr = 1;}

void moverLiebre( int *liebrePtr, int rnd ) {
    if( rnd <= 2 )
        *liebrePtr += 0;
    else if ( rnd <= 4 )
        *liebrePtr += 9;
    else if ( rnd <= 5 )
        *liebrePtr -= 12;
    else if ( rnd <= 8 )
        *liebrePtr += 1;
    else
        *liebrePtr -= 2;
    if (*liebrePtr < 1 )
        *liebrePtr = 1;} 
    
void imprimirPosiciones ( int *tortugaPtr, int *liebrePtr ) {
    if( *tortugaPtr == *liebrePtr )
        cout << "OUCH!!!    " << *tortugaPtr << "\t\t" << *liebrePtr << endl;
    else 
        cout << "           " << *tortugaPtr << "\t\t" << *liebrePtr << endl;}

int main (){
    int tortuga = 1, liebre = 1, rnd;
    srand( time( 0 ));
    cout << "\n\t\tBANG!!!\n" << "            " << "Y ARRANCAN!!!\n" << endl;
    cout << "\tTortuga" << "\t      " << "Liebre" << endl;
    while( tortuga < 70 && liebre < 70 ) {
        rnd = 1 + rand() % 10; 
        moverTortuga( &tortuga, rnd );
        moverLiebre( &liebre, rnd );
        imprimirPosiciones( &tortuga, &liebre );}
    
    cout << endl;
    if( tortuga >= liebre )
        cout << "\t LA TORTUGA GANA!!! YEY!!! " << endl;
    else
        cout << "\tLa liebre gana! pff " << endl;

    return 0;   
} 
