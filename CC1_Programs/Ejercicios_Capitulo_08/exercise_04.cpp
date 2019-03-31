Para cada uno de los siguientes enunciados, escriba una sola instruccion que realice la tarea especificada. Suponga que se han declarado las variables de punto flotante numero1 y numero2, se ha inicializado con 7.3.  
   
    (a) Declarar la variable fPtr para que sea un puntero a un objeto de tipo double e inicializar el puntero con nullptr.

       double *fPtr = nullptr;

    (b) Asignar la direccion de la variable numero1 a la variable puntero fPtr.

       fPtr = &numero1;

    (c) Imprimir el valor del objeto al que apunta fPtr.

       cout << "*fPtr: " << *fPtr << endl;

    (d) Asignar a la variable numero2 el valor del objeto al que apunta fPtr.

       numero2 = *fPtr;

    (e) Imprimir el valor de numero2.

       cout << "Numero2: " << numero2 << endl;

    (f) Imprimir la direccion numero1.

       cout << "Direccion Numero1: " << &numero1 << endl;

    (g) Imprimir la direccion almacenada en fPtr. La direccion que se imprime es igual que la de numero1?

       cout << "Direccion almacenada en fPtr: " << fPtr << endl;
       El valor es el mismo.




