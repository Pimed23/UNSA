#include <iostream>
using namespace std;

template < typename Type >
class Matriz { 

    public:
        Matriz();
        Matriz( const int, const int );
        Matriz( const Matriz & );
        ~Matriz();

        void SetMatriz();

        Matriz <Type> operator =( const Matriz & );
        Matriz <Type> operator +( const Matriz & );
        template < typename T >
        friend ostream& operator <<( ostream &, const Matriz <T> );
 
    private:
        int fila, columna;
        Type **M;

};

int main() {
    cout << "Matriz1: " << endl;
    Matriz < int > M1( 2, 2 );
    M1.SetMatriz();
    cout << "Matriz2: " << endl;
    Matriz < int > M2( 2, 2 );
    M2.SetMatriz();
    cout << "Resultado: " << endl;
    M1 = ( M1 + M2 );
    cout << M1;

    return 0;
}

template < typename Type >
Matriz <Type>::Matriz() {
    this -> fila = 0;
    this -> columna = 0;
}

template < typename Type >
Matriz <Type>::Matriz( const int fila, const int columna ) {
    this -> fila = fila;
    this -> columna = columna;

    M = new Type *[ fila ];
    for( int i = 0; i < fila; i++ )
        M[ i ] = new Type[ columna ];
    
    for( int i = 0; i < fila; i++ ) {
        for( int j = 0; j < columna; j++ )
            *( *( M + i ) + j ) = 0;
    }
}

template < typename Type >
Matriz <Type>::Matriz( const Matriz &M ) {
    this -> fila = M.fila;
    this -> columna = M.columna;

    this -> M = new Type *[ fila ];
    for( int i = 0; i < fila; i++ )
        *( this -> M + i ) = new Type[ columna ];
    
    for( int i = 0; i < fila; i++ ) {
        for( int j = 0; j < columna; j++ ) 
            *( *( this -> M + i ) + j ) = *( *( M.M + i ) + j );
    }
}

template < typename Type >
Matriz <Type>::~Matriz() {
    delete[] M;
}

template < typename Type >
void Matriz <Type>::SetMatriz() {
    for( int i = 0; i < fila; i++ ) {
        for( int j = 0; j < columna; j++ ) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> *( *( M + i ) + j );
        }
    }
}

template < typename Type >
Matriz <Type> Matriz <Type>::operator +( const Matriz &A ) {
    Matriz B( A.fila, A.columna );
    for( int i = 0; i < fila; i++ ) {
        for( int j = 0; j < columna; j++ ) {
            *(*( B.M + i ) + j ) = (*(*( M + i ) + j ) + *(*( A.M + i ) + j ));
        }
    }
    return B;
}

template < typename Type >
Matriz <Type> Matriz <Type>::operator =( const Matriz &A ) {
    this -> columna = A.columna;
    this -> fila = A.fila;
    this -> M = new Type *[ fila ];
    for( int i = 0; i < fila; i++ )
        *( this -> M + i ) = new Type[ columna ];
    
    for( int i = 0; i < fila; i++ ) {
        for( int j = 0; j < columna; j++ ) 
            *( *( this -> M + i ) + j ) = *( *( A.M + i ) + j );
        }
	return *this;
}

template < typename Type >
ostream& operator <<( ostream &o, const Matriz <Type> M ) {
	for( int i = 0; i < M.fila; i++ ) {
        for( int j = 0; j < M.columna; j++ )
            o << *(*( M.M + i ) + j ) << " ";
        cout << endl;
    }
	return o;
}
