#include <iostream>
#include <string>
using namespace std;

void max_right( int [ 20 ][ 20 ]);
void max_diag_right( int [ 20 ][ 20 ]);
void max_diag_left( int [ 20 ][ 20 ]);
void fill_matrix( int [ 20 ][ 20 ]);
void transpose( int [ 20 ][ 20 ]);
void print_matrix( int [ 20 ][ 20 ]);


int main() {

    int grid[ 20 ][ 20 ];
    fill_matrix( grid );
    cout << "RESPUESTAS: " << endl;
    cout << "Producto Diagonal Izquierda: " << endl;
    max_diag_left( grid );
    cout << "Producto Diagonal Derecha: " << endl;
    max_diag_right( grid );
    cout << "Producto Horizontal: " << endl;
    max_right( grid );
    transpose( grid );
    cout << "Producto Vertical: " << endl;
    max_right( grid );


    return 0;
}

void fill_matrix( int grid[ 20 ][ 20 ]) {

    for( int i = 0; i < 20; ++i )
        for( int j = 0; j < 20; ++j )
            cin >> grid[ i ][ j ];
}

void print_matrix( int grid[ 20 ][ 20 ]) {

    for( int i = 0; i < 20; ++i ) {
        for( int j = 0; j < 20; ++j ) {
            cout.fill( '0' );
            cout.width( 2 );
            cout << grid[ i ][ j ] << " "; 
        }
        cout << endl;
    }
}

void transpose( int grid[ 20 ][ 20 ]) {

    int trans[ 20 ][ 20 ];
    for( int i = 0; i < 20; ++i )
        for( int j = 0; j < 20; ++j )
            trans[ j ][ i ] = grid[ i ][ j ];
    
    for( int i = 0; i < 20; ++i )
        for( int j = 0; j < 20; ++j )
            grid[ i ][ j ] = trans[ i ][ j ];

}

void max_right( int grid[ 20 ][ 20 ]) {
    
    int prod_right = 1, rmax_prod = 1;
    int nums_prod[ 6 ];

    for( int i = 0; i < 20; ++i ) {
        for( int j = 3; j < 20; ++j ) {
            if( j == 3 || ( grid[ i ][ j ] > grid[ i ][ j - 4 ])) {
                for( int k = j; k > j - 4; --k )
                    prod_right *= grid[ i ][ k ];

                if( prod_right > rmax_prod ) {
                    rmax_prod = prod_right;
                    for( int l = 0; l < 6; ++l )
                        if( l == 0 )
                            nums_prod[ l ] = i;
                        else if( l == 1 )
                            nums_prod[ l ] = j;
                        else 
                            nums_prod[ l ] = grid[ i ][ j - l + 2 ];
                }

                prod_right = 1;
            }
        }
    }

    for( int r = 0; r < 6; ++r ) {

        if( r == 0 ) {
        
            cout << "Fila: ";
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ 0 ] + 1 << " ";
        }

        else if( r == 1 ) {

            cout << "Columna: ";
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ 1 ] + 1 << " Numeros: ";
        }

        else {
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ r ] << " ";
        }
    }

    cout << "Producto: ";
    cout << rmax_prod << endl;
}

void max_diag_right( int grid[ 20 ][ 20 ]) {

    int prod_diag = 1, dmax_prod = 1;
    int nums_prod[ 6 ];

    for( int i = 0; i < 17; ++i ) {
        for( int j = 0; j < 17; ++j ) {
            for( int k = 0; k < 4; ++k )
                prod_diag *= grid[ i + k ][ j + k ];

            if( prod_diag > dmax_prod ) {
                dmax_prod = prod_diag;
                for( int l = 0; l < 6; ++l )
                    if( l == 0 )
                        nums_prod[ l ] = i;
                    else if( l == 1 )
                        nums_prod[ l ] = j;
                    else 
                        nums_prod[ l ] = grid[ i - 2 + l ][ j - 2 + l ];
            }

            prod_diag = 1;
        }
    }

    for( int r = 0; r < 6; ++r ) {

        if( r == 0 ) {
        
            cout << "Fila: ";
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ 0 ] + 1 << " ";
        }

        else if( r == 1 ) {

            cout << "Columna: ";
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ 1 ] + 1 << " Numeros: ";
        }

        else {
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ r ] << " ";
        }
    }

    cout << "Producto: ";
    cout << dmax_prod << endl;
}

void max_diag_left( int grid[ 20 ][ 20 ]) {

    int prod_diag = 1, dmax_prod = 1;
    int nums_prod[ 6 ];

    for( int i = 3; i < 20; ++i ) {
        for( int j = 0; j < 17; ++j ) {
            for( int k = 0; k < 4; ++k )
                prod_diag *= grid[ i - k ][ j + k ];

            if( prod_diag > dmax_prod ) {
                dmax_prod = prod_diag;
                for( int l = 0; l < 6; ++l )
                    if( l == 0 )
                        nums_prod[ l ] = i;
                    else if( l == 1 )
                        nums_prod[ l ] = j;
                    else 
                        nums_prod[ l ] = grid[ i - 2 + l ][ j - 2 + l ];
            }

            prod_diag = 1;
        }
    }

    for( int r = 0; r < 6; ++r ) {

        if( r == 0 ) {
        
            cout << "Fila: ";
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ 0 ] + 1 << " ";
        }

        else if( r == 1 ) {

            cout << "Columna: ";
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ 1 ] + 1 << " Numeros: ";
        }

        else {
            cout.fill  ('0');    
            cout.width ( 2 );
            cout << nums_prod[ r ] << " ";
        }
    }

    cout << "Producto: ";
    cout << dmax_prod << endl;
}
