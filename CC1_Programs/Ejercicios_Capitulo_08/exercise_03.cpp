Para cada uno de los siguientes enunciados, escriba instrucciones en C++ que realicen la tarea especificada. Suponga que los numeros de punto flotante con precicion doble se almacenan en ocho bytes y que la direccion inicial del arreglo esta en la ubicacion 1002500 en la memoria. Cada parte del ejercicio debe usar los resultados de incisos anteriores, en donde sea apropiado.

    (a) Declara un arreglo de tipo double llamado numeros con 10 elementos, e inicializar los elementos con los valores 0.0, 1.1, 2.2, ..., 9.9. Suponga que se ha definido la constante tamano como 10.
    
       double numero[ tamano ] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };

    (b) Declarar un puntero nPtr que apunte a una variable de tipo double.

       double *nPtr = nullptr;

    (c) Usar una instruccion for para imprimir los elementos del arreglo integrado "numeros" mediante el uso de notacion subindice. Imprima cada numero con un digito a la derecha del punto decimal.

       #include <iostream>
       #include <iomanip>
       using namespace std;

       int main () {
           int const tamano = 10;
           double numero[ tamano ] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
           cout << fixed << setprecision( 1 );
           for( int i = 0; i < tamano; i++ )
               cout << numero[ i ] << " ";
           cout << endl;
           return 0;
       }

    (d) Escribir dos instrucciones separadas, cada una de las cuales debe asignar la direccion inicial del arreglo integrado numeros a la variable puntero nPtr. 
       
       nPtr = numero;
       nPtr = &numero[ 0 ];
       
    (e) Usar una instruccion for para imprimir los elementos del arreglo integrado numeros, usando la notacion puntero/ desplazamiento con el puntero nPtr.

       cout << fixed << setprecisicion( 1 );
       for( int = i; i < tamano; i++ )
           cout << *( nPtr + i ) << " ";

    (f) Usar una instruccion for para imprimir los elementos del arreglo numeros, usando la notacion puntero/ desplazamiento con el nombre del arreglo como el puntero.

       cout << fixed << setprecisicion( 1 );
       for( int = i; i < tamano; i++ )
           cout << *( numero + i ) << " ";

    (g) Usar una instruccion for para imprimir los elementos del arreglo numeros, usando la notacion puntero/ subindice con el puntero nPtr.

       cout << fixed << setprecisicion( 1 );
       for(int i = 0; i < tamano; i++ )
           cout << nPtr[ i ] << " ";

    (h) Hacer referencia al cuarto elemento del arreglo numeros, usando la notacion subindice del arreglo, la notacion puntero/ desplazamiento con el nombre del arreglo integrado como puntero, la notacion del subindice de puntero nPtr y la notacion puntero /desplazamiento con nPtr.

       numero[ 3 ];
       *( numero + 3 );
       nPtr[ 3 ];
       *( nPtr + 3 );
    
    (i) Suponiendo que nPtr apunta al inicio del arreglo integrado numero, Que direccion se desreferencia mediante nPtr + 8? Que valor se almacena en esa ubicacion?

       La direccion es 1002500 + 8 * 8 = 1002564. El valor es 8.8.

    (j) Suponiendo que nPtr apunta a numero[ 5 ], Que direccion se referencia mediante nPtr despues de ejecutar nPtr -= 4? Cual es el valor alamcenado en esta ubicacion?

       La direccion de numero[ 5 ] es 1002500 + 5 * 8 = 1002540.
       La direccion de nPtr -= 4 es 1002540 - 4 * 8 = 1002508.
       El valor en esa ubicacion es 1.1.

