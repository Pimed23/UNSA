#include <iostream>
using namespace std;

//Prototipe
int num_datos( int [] );
void llenar( int *, int *, int *, int, int, int );
void imprimir( int *, int );

//Variables globales
int a2[] = { 1, 3, 4, 7, 8, 9, 12, 15, 16, 17, 21, 23, 25 };
int a1[] = { 2, 5, 6, 10, 11, 13, 14, 18, 19, 20, 22, 24, 26, 27, 28 };

int *unir = NULL;
int tam;

int main() {

    int tam1 = 0, tam2 = 0;

    tam1 = num_datos( a1 );
    tam2 = num_datos( a2 );
    tam = tam1 + tam2;

    unir = new int [ tam ];

    llenar( unir, a1, a2, tam, tam1, tam2 );
    imprimir( unir, tam );

    delete[] unir;
    return 0;
}

int num_datos( int datos[]) {
    int cont = 0;
    while( datos[ cont ] ) cont++;
    return cont;
}

void llenar( int *u, int *a, int *b, int tam, int tam1, int tam2 ) {
    int x = 0, y = 0;
    for( int i = 0; i < tam; i++ ) {
        if( *( a + x ) < *( b + y )) {
            *( u + i ) = *( a + x );
            x++;
            if( x > tam1 ){
                *( u + i ) = *( b + y );
                y++;
            }
        }
        else {
            *( u + i ) = *( b + y );
            y++;
            if( y > tam2 ){
                *( u + i ) = *( a + x );
                x++;
            }
        }
    }
}

void imprimir( int *arr, int tam ) {
    for( int i = 0; i < tam; i++ ) {
        cout << *( arr + i ) << " ";
    }
    cout << endl;
}