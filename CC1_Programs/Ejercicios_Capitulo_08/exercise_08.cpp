Para cada uno de los siguientes enunciados, escriba instrucciones de C++ que realicen la tarea especificada. Suponga que los enters sin signo se almacenan en dos bytes y que la direccion inicial del arreglo integrado esta en la ubicacion 1002500 en memoria

    (a) Declarar un arreglo integrado de tipo unsigned int llamado valores con cinco elementos. e inicializar los elementos con los enteros pares del 2 al 10. Suponga que la constante simbolica tamanio se ha declarado como 5.

        unsigned int valores [ tamanio ] = { 2 , 4 , 6 , 8 , 10 }

    (b) Declarar un puntero vPtr que apunte a un objeto del tipo unsigned int.

        unsigned int vPtr = nullptr;

    (c) Usar una instruccion for para imprimir los elementos del arreglo integrado valores mediante el uso de la notacion subindices.

        for( int i = 0; i < tamanio < i++ )
            cout << valores[ i ] << " ";
    (d) Escribir dos intrucciones separadas que asignen la direccion inicial del arreglo integrado valores a la variable puntero vPtr.

        vPtr = valores;
        vPtr = &valores[ 0 ];

    (e) Usar una instruccion for para imprimir los elementos del arreglo integrado valores usando la notacion puntero/ desplazamiento.

        for( int i = 0; i < tamanio; i++ )
            cout << *( vPtr + i ) << " ";

    (f) Usar una instruccion for para imprimir los elementos del arreglo integrado valores usando la notacion puntero/ deslpazamiento, con el nombre del arreglo integrado como apuntador.

        for( int i = 0; i < tamanio; i++ )
            cout << *( valores + i ) << " ";
    
    (g) Usar una instruccion for para imprimir los elementos del arreglo integrado valores, mediante el uso de subindices con el puntero al arreglo.

        for( int i = 0; i < tamanio; i++ )
            cout << vPtr[ i ] << " ";

    (h) Hacer referencia al quinto elemento de valores mediante el uso de la notacion de subindicees de arreglo, la notacion puntero/ desplazamiento con el nombre del arreglo integrado como puntero, la notacion de subindice de puntero y la notacion puntero/ desplazamiento.
        
        valores[ 4 ];
        *( valores + 4 );
        vPtr[ 4 ];
        *( vPtr + 4 );

    (i) Que direccion se referencia mediante vPtr + 3? Que valor se almacena en esa ubicacion?

        La direccion es 1002500 + 3 * 8 = 1002524. El valor es 8

    (j) Suponiendo que vPtr apunta a valores[ 4 ] Que direccion se referencia mediante vPtr -= 4? Que valor se almacena en esa ubicacion?

        La direccion de valores[ 4 ] es 1002500 + 4 * 8 = 1002532.
        La direccion de vPtr -= 4 es 1002532 - 4 * 8 = 1002500
        El valor en esa ubicacion es 2.
