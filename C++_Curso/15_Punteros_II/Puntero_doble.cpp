#include <iostream>
using namespace std;
 
int main() { 
   int **tabla; 
   int n = 134; 
   int m = 231;
   int i;
 
   // Array de punteros a int: 
   tabla = new int*[n]; 
   // n arrays de m ints 
   for(i = 0; i < n; i++) 
      tabla[i] = new int[m]; 
   tabla[21][33] = 123; 
   cout << tabla[21][33] << endl; 
   // Liberar memoria: 
   for(i = 0; i < n; i++) delete[] tabla[i]; 
   delete[] tabla; 
   
   return 0; 
}