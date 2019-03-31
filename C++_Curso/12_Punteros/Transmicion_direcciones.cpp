#include <iostream>
using namespace std;

void intercambiar( int *, int * );

int main() {

    int num1 = 10, num2 = 20;

    intercambiar( &num1, &num2 );

    cout << "Valor de num1: " << num1 << endl;
    cout << "Valor de num2: " << num2 << endl;

    return 0;

}

void intercambiar( int *num1, int *num2 ) {
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}