//SOBRECARGA ISTREAM AND OSTREAM
#include <iostream>
using namespace std;

class Hora {

    public:
        Hora( int, int, int );
        friend ostream & operator <<( ostream &, Hora );
        friend istream & operator >>( istream &in, Hora &x );

    private:
        int hora, minuto, segundo;
};

Hora::Hora( int _hora = 0, int _minuto = 0, int _segundo = 0 ) {
    hora = _hora;
    minuto = _minuto;
    segundo = _segundo;
}

ostream & operator <<( ostream &out, Hora x ) {
    out << x.hora << ":" << x.minuto << ":" << x.segundo;
    return out;
}

istream & operator >>( istream &in, Hora &x ) {
    cout << "Hora: ";
    in >> x.hora;
    cout << "Minuto: ";
    in >> x.minuto;
    cout << "Segundo: ";
    in >> x.segundo;
    return in;
}

int main() {
    Hora H1;
    cin >> H1;
    cout << H1 << endl;
    return 0;
}