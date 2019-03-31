#include <iostream>
using namespace std;

int &Acceso(int*, int);

int main() {
   int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   
   Acceso(array, 3)++;
   Acceso(array, 6) = Acceso(array, 4) + 10;
   
   cout << "Valor de array[3]: " << array[3] << endl;
   cout << "Valor de array[6]: " << array[6] << endl;
   
   return 0;
}

int &Acceso(int* vector, int indice) {
   return vector[indice];
}