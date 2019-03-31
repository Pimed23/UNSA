Busque el error en cada uno de los siguientes segmentos. Si puede corregirse, explique como.

    (a) int *numero;
        cout << numero << endl;

        Error: El puntero no se ha inicializado *numero por tal imprimira la direccion de *numero;
        Correccion: Inicializar *numero con alguna direccion o con nullptr;

    (b) double *realPtr;
        long *enteroPtr;
        enteroPtr = realPtr;

        Error: No se puede debido a que son de tipos diferentes, uno pertenece a double y otro a long.
        Correccion: Se debe convertir ambos punteros a un mismo tipo de dato para poder compararlos. 

    (c) int * x, y;
        x = y;

        Error: No puedo asignar a un int a int* ya que son tipos diferentes.
        Correccion: Podemos asignarle a x la direccion de y dandonos la instruccion x = &y.

    (d) char s[] = "Este es un arreglo de caracteres";
        for( ; *s != '\0'; ++s )
            cout << *s << ' ';

        Error: Uso incorrecto del operador incremento
        Correccion: Se corrigue declarando una variable que pueda incrementar la direccion.

    (e) short *numPtr, resultado;
        void *genericoPtr = numPtr;
        resultado = *genericoPtr + 7;

        Error: El tipo de dato es diferente.
        Correccion: Podemos cambiar a void por short de esta manera se solucionara.

    (f) double x = 19.34;
        double xPtr = &x;
        cout << xPtr << endl;

        Error: xPtr esta declarado como un double y al asignarsele una direccion surge un error.
        Correccion: Declarar xPtr como un puntero.


