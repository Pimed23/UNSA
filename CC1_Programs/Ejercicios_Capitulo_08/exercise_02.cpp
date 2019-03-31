Conteste con verdadero o falso a cada una de las siguientes proposiciones; en caso de ser falso explique porque.

(a) El operador direccion & se puede aplicar solo a constantes y expresiones. 

Falso. Porque el operando del operador & debe ser un lvalue; el operador direccion no se puede aplicar a constantes o expresiones que no den referencias como resultado.

(b) Un puntero que se declara de tipo void * se puede desreferenciar.

Falso. A pointer to void cannot be dereferenced. Such a pointer does not have a type that enables the compiler to determine the number of bytes of memory to dereference and the type of the data to which the pointer points.

(c) Un puntero de un tipo no se puede asignar a uno de otro tipo sin una operacion de conversion de tipos.

Falso, ya que se puede asignar punteros de cualquier tipo a punteros void y los punteros de tipo void se pueden asignar a punteros de otros tipos solo con una conversion de tipos explicita.
