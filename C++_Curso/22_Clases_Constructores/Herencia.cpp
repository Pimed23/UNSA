#include <iostream>
using namespace std;

class Persona {
    
    public:
        Persona( string  _nombre, int _edad ) : nombre( _nombre ), edad( _edad ) {}
        void mostrarPersona();

    private:
        string nombre;
        int edad;

};

void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

class Empleado : public Persona {

    public:
        Empleado( string, int, bool, int );
        void mostrarEmpleado();

    private:
        bool disp;
        int cel;
};

Empleado::Empleado( string _nombre, int _edad, bool _disp, int _cel ) : Persona( _nombre, _edad ) {
    disp = _disp;
    cel = _cel;
}

void Empleado::mostrarEmpleado() {
    mostrarPersona();
    cout << "Disponibilidad: " << disp << endl;
    cout << "Celular: " << cel << endl;
}

class Estudiante : public Persona {

    public:
        Estudiante( string _nombre, int _edad, int _cod );
        void mostrarEstudiante();

    private:
        int cod;
        
};

Estudiante::Estudiante( string _nombre, int _edad, int _cod ) : Persona( _nombre, _edad ) {
    cod = _cod;
}

void Estudiante::mostrarEstudiante() {
    mostrarPersona();
    cout << "Codigo: " << cod << endl;
}


class Universitario : public Estudiante {
    
    public:
        Universitario( string _nombre, int _edad, int cod, string _spec );
        void mostrarUniversitario();

    private:
        string spec;
};

Universitario::Universitario( string _nombre, int _edad, int _cod, string _spec ) : Estudiante( _nombre, _edad, _cod ) {
    spec = _spec;
}

void Universitario::mostrarUniversitario() {
    mostrarEstudiante();
    cout << "Especialidad: " << spec << endl;
}

int main() {

    Estudiante E1( "Daniel", 20, 72151499 );
    E1.mostrarEstudiante();

    Universitario U1( "Arnold", 22, 152463, "Mecanica");
    U1.mostrarUniversitario();
    return 0;
}