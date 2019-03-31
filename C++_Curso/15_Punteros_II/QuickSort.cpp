#include <iostream>
using namespace std;

void QuickSort( int *, int, int ); //ARREGLO - POSICION INICIAL - POSICION FINAL
void Intercambiar( int &, int & );

int *punt = NULL;
int tam = 5;

int main() {

    int arreglo[ 5 ] = { 3, 4, 9, 2, 7 };
    punt = arreglo;

    QuickSort( punt, 0, 4 );
    for( int i = 0; i < 5; i++ ) {
        cout << arreglo[ i ] <<  " ";
    }
    cout << endl;
    return 0;
}

void QuickSort( int arr[], int left, int right ) {

      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] > pivot)
                  i++;

            while (arr[j] < pivot)
                  j--;

            if (i <= j) {
                  Intercambiar( arr[ i ], arr[ j ]);
                  i++;
                  j--;
            }
      }

      /* recursion */
      if (left < j)
            QuickSort( arr, left, j );

      if (i < right)
            QuickSort( arr, i, right );

}

void Intercambiar( int &a, int &b ) {
      int tmp;
      tmp = a;
      a = b;
      b = tmp;
}