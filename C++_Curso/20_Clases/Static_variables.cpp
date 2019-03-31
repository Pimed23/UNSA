#include <iostream>
using namespace std;

class Variable {

    public:
        Variable() {
            cout << ++count << endl;
        }

    private:
        static int count;
};

int Variable::count = 10; //INICIALIZACION DE LA VARIABLE ESTATICA

int main() {
    Variable v1, v2, v3;
    return 0;
    //COMO SE PUEDE NOTAR LA VARIABLE ES LA MISMA PARA CUALQUIER OBJETO
    //NO SE RESETEA
}