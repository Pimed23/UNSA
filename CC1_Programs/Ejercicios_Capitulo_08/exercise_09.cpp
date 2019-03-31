Para cada uno de los siguientes enunciados, escriba una sola instruccion que realice la tarea especificada. Suponga que se declararon las variables long llamadas valor1 y valor2, y que se inicializo valor1 con 200000.

    (a) Declarar la variable longPtr para que sea un puntero a un objeto de tipo long.

        long *longPtr;

    (b) Asignar la direccion de la variable valor1 a la variable puntero longPtr.

        longPtr = &valor1;

    (c) Imprimir el valor del objeto al que apunta longPtr.

        cout << "*longPtr: " << *longPtr << endl;

    (d) Asignar a la variable valor2 el valor del objeto al que apunta longPtr.

        valor2 = *longPtr;

    (e) Imprimir el valor de valor2.

        cout << "Valor2: " << valor2 << endl;

    (f) Imprimir la direccion de valor1.

        cout << "Direccion Valor1: " << &valor1 << endl;
        
    (g) Imprimir la direccion almacenada en longPtr. El valor que se imprimio es igual que la direccion de valor1?

        cout << "Direccion almacenada en longPtr: " << longPtr << endl;
        El valor es el mismo.
