#include <iostream>
using namespace std;

//ESTRUCTURAS
struct L {
    float arr;
    int num;
    int ord;
};

//FUNCIONES

void Ingresar_datos();
void Llenar_struct( L [], bool );
void Imprimir_array( L [], float * );
void QuickSortM( L [], int, int );
void QuickSortm( L [], int, int );
void Intercambiar_1( float &, float & );
void Intercambiar_2( int &, int & );

// VARIABLES GLOBALES

int tamano = 1;
float *array = NULL;

int main() {

    Ingresar_datos();
    struct L Lista[ tamano ];
    Llenar_struct( Lista, true );
    QuickSortM( Lista, 0, tamano - 2 );
    Imprimir_array( Lista, array );
    Llenar_struct( Lista, false );
    QuickSortm( Lista, 0, tamano - 2 );
    Imprimir_array( Lista, array );
    delete[] array;
    return 0;
    
}

void Ingresar_datos() {

    float *aux;
    bool control = true;
    int s = 0;

    array = new float[ tamano ];

    cout << "INGRESO DE DATOS( Escriba -1 para salir ): " << endl;

    while( control ) {
        cout << "Ingrese [" << s << "]: ";
        cin >> *( array + s );

        if( *( array + s ) == -1 ) {
            control = false;
        }

        else {
            
            tamano += 1;
            aux = new float[ tamano ];
            
            for( int i = 0; i < tamano - 1; i++ ) {
                *( aux + i ) = *( array + i );
            }

            delete[] aux;
            aux = array;
        }
        s++;
    }
}

void Imprimir_array( L datos[], float *array ) {

    cout << "LOS DATOS INGRESADOS SON: " << endl;
    for( int i = 0; i < tamano - 1; i++ ) {
        cout << "Elemento [" << i << "]: " << *( array + i ) << " " << datos[ i ].num << " " << datos[ i ].ord << endl;
    }
}

void QuickSortM( L datos[], int left, int right ) {

      int i = left, j = right;
      int tmp;
      float pivot = datos[(left + right) / 2].arr;

      /* partition */
      while ( i <= j ) {
            while ( datos[ i ].arr > pivot)
                  i++;

            while ( datos[ j ].arr < pivot)
                  j--;

            if (i <= j) {
                  Intercambiar_1( datos[ i ].arr, datos[ j ].arr );
                  Intercambiar_2( datos[ i ].ord, datos[ j ].ord );
                  i++;
                  j--;
            }
      }

      /* recursion */
      if (left < j)
            QuickSortM( datos, left, j );

      if (i < right)
            QuickSortM( datos, i, right );

}

void QuickSortm( L datos[], int left, int right ) {

      int i = left, j = right;
      int tmp;
      float pivot = datos[(left + right) / 2].arr;

      /* partition */
      while ( i <= j ) {
            while ( datos[ i ].arr < pivot)
                  i++;

            while ( datos[ j ].arr > pivot)
                  j--;

            if (i <= j) {
                  Intercambiar_1( datos[ i ].arr, datos[ j ].arr );
                  Intercambiar_2( datos[ i ].num, datos[ j ].num );
                  i++;
                  j--;
            }
      }

      /* recursion */
      if (left < j)
            QuickSortm( datos, left, j );

      if (i < right)
            QuickSortm( datos, i, right );

}

void Intercambiar_1( float &a, float &b ) {
    float tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void Intercambiar_2( int &a, int &b ) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void Llenar_struct( L Lista[], bool c ) {

    if( c ) {

        for( int i = 0; i < tamano; i++ ) {
            Lista[ i ].arr = *( array + i );
            Lista[ i ].num = i;
            Lista[ i ].ord = i;
        }
    }
    else {
        for( int j = 0; j < tamano; j++ ) {
            Lista[ j ].arr = *( array + j );
            Lista[ j ].num = j;
        }
    }

}