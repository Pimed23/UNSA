Busque el error en cada uno de los siguientes segmentos de programa. Suponga las siguientes declaraciones e instrucciones.

    int *zPr;
    void *sPtr = nullptr;
    int numero;
    int z[ 5 ] = { 1, 2, 3, 4, 5 };

//  a) ++zPtr;

       Error: No se ha inicializado zPtr.
       Correccion: Inicializar zPtr con zPtr = z.

//  b) usa el puntero para obtener el primer valor del arreglo integrado
       numero = zPtr;

       Error: El puntero no se desreferencia.
       Correccion: cambiar la instruccion a numero = *zPtr;

//  c) asigna el elemento 2 del arreglo (el valor 3) a numero
       numero = *zPtr[ 2 ];

       Error: zPtr[ 2 ] no es un puntero y no se debe desreferenciar.
       Correccion: cambiar *zPtr[ 2 ] a zPtr[ 2 ]

//  d) imprime el arreglo integrado z completo
       for( size_t i = 0; i <= 5; i++ )
           cout << zPtr[ i ] << endl;

       Error: Se hace referencia a un elemento del arreglo integrado fuera de los limites de este, con subindice de puntero.
       Correccion: Para evitar esto, cambie el operador relacional en la instruccion for a < 0 cambie el 5 a 4.
       
//  e) asigna a numero el valor al que apunta sPtr
       numero = *sPtr;

       Error: Se desreferencia un puntero void.
       Correcion: Para desreferenciar el puntero void, primero se debe convertir en un puntero entero. Cambie la instruccion a numero = *static_cast< int * > ( sPtr );

//  f) ++z;
        
       Error: Tratar de modificar el nombre de un arreglo integrado con la aritmetica de punteros.
       Correccion: Usar una variable apuntador en vez del nombre del arreglo integrado para realizar la aritmetica de punteros, o usar un subindice con el nombre del arreglo para hacer referencia a un elemento especifico.


