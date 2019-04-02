// DIRECTIVAS DEL PREPROCESADOR

#include <iostream>
using namespace std;

// DECLARACION DE VARIABLES GLOBALES

// PROTOTIPOS DE FUNCIONES

// DECLARACION DE CLASES

template < typename Type >
class Punto {

    public:
        Punto();
        Punto( const Type, const Type );
        Punto( const Punto & );
        ~Punto() {}

        void setData( const Type, const Type );
        void getDataX();
        void getDataY();

        Punto <Type> operator +( const Punto <Type> );

        template < typename T >
        friend ostream& operator <<( ostream &, const Punto <T> );

    private:
        Type x, y;
};

template < typename Type >
class Array {

	public:
		Array();
		Array( const Type *,const int );
		Array( const Array & ) ;
		~Array();

        void Resize( const int );
		void Push_Back( const Type );
		void Insert( const Type p, const int );
		void Remove( const int pos );

		int getSize() { return this -> size; }
		
		template < typename T >
		friend ostream& operator <<( ostream &, const Array <T> );
		Array <Type> operator +( const Array <Type> );
		Array <Type> operator =( const Array <Type> );
	
	private:
		int size;
		Type *arr;
		
};

int main() {
    Punto < int > P1( 3, 4 );
    Punto < int > P2( 5, 6 );
    Punto < int > P3[ 2 ] = { P1, P2 };
    Punto < int > P4( 1, 2 );
	Punto < int > P5( 7, 8 );
	Punto < int > P6[ 2 ] = { P4, P5 };

    Array < Punto<int>> A1( P3, 2 );
	Array < Punto<int>> A2( P6, 2 );
	
	Array < Punto<int>> A3;
	A3 = A1 + A2;

	cout << A3;
    return 0;
}

// DECLARACIONES DE CLASE PUNTO

template < typename Type >
Punto <Type> ::Punto() {
    this -> x = 0;
    this -> y = 0;
}

template < typename Type >
Punto <Type> ::Punto( const Type x, const Type y ) {
    this -> x = x;
    this -> y = y;
}

template < typename Type >
Punto <Type> ::Punto( const Punto &P ) {
    this -> x = P.x;
    this -> y = P.y;
}

template < typename Type >
void Punto <Type> ::setData( const Type x, const Type y ) {
    this -> x = x;
    this -> y = y;
}

template < typename Type >
void Punto <Type> ::getDataX() {
    return this -> x;
}

template < typename Type >
void Punto <Type> ::getDataY() {
    return this -> y;
}

template < typename Type >
Punto <Type> Punto <Type>::operator+( const Punto <Type> P  ) {
    Punto <Type> R;
    R.x = this -> x + P.x;
    R.y = this -> y + P.y;
    return R;
}

template < typename Type >
ostream& operator <<( ostream &o, const Punto <Type> P ) {
    o << "( " << P.x << ", " << P.y << " )";
    return o;
}


// DECLARACIONES DE CLASE ARRAYPUNTO
template < typename Type >
Array <Type> ::Array() {
    this -> size = 0;
    this -> arr = new Type[ size] ;
}

template < typename Type >
Array <Type> ::Array( const Type *_arr, const int size ) {
	this -> size = size;
	this -> arr = new Type[ size ];

	for( int i = 0; i < size; i++ )
		*( arr + i ) = *( _arr + i );
}

template < typename Type >
Array <Type> ::Array( const Array &A ) {
	this -> size = A.size;
	this -> arr = new Type[ size ];

	for( int i = 0; i < size; i++ )
		*( arr + i ) = *( A.arr + i );
}

template < typename Type >
Array <Type> ::~Array() {
	delete[] arr;
}

template < typename Type >
void Array <Type> ::Resize( const int newsize ) {
	Type *temp = new Type[ newsize ];
	int minsize = ( size > newsize ) ? newsize : size;
	for( int i = 0; i < minsize; i++ )
		*( temp + i ) = *( arr + i );
	delete[] arr;
	arr = temp;
	size = newsize;
}

template < typename Type >
void Array <Type> ::Push_Back( const Type P ) {
	Resize( size + 1 );
	*( arr + size - 1 ) = P;
}

template < typename Type >
void Array <Type> ::Insert( const Type P, const int pos ) {
	Resize( size + 1 );
	for( int i = size; i > pos; i-- )
		*( arr + i ) = *( arr + i - 1 );
	*( arr + pos ) = P;
}

template < typename Type >
void Array <Type> ::Remove( const int pos ) {
	for( int i = pos; i < size - 1; i++ )
		*( arr + i ) = *( arr + i + 1 );
	Resize( size - 1 );
}

template < typename Type >
Array <Type> Array <Type>::operator +( const Array <Type> A ) {
	for( int i = 0; i < A.size; i++ )
		this -> Push_Back( *( A.arr + i ) );
	return *this;
}

template < typename Type >
ostream& operator <<( ostream &o, const Array <Type> A ) {
	for( int i = 0; i < A.size; i++ )
		o << *( A.arr + i ) << endl;
	return o;
}

template < typename Type >
Array <Type> Array <Type>::operator =( const Array <Type> A ) {
	Array <Type> B( A );
	size = B.size;
	arr = B.arr;
	return *this;
}
