#include <iostream>
using namespace std;
 
#define NCIUDADES 5 
#define CIUDAD_A 0 
#define CIUDAD_B 1 
#define CIUDAD_C 2 
#define CIUDAD_D 3 
#define CIUDAD_E 4
 
// Prototipo para  calcular la distancia entre dos ciudades: 
int Distancia(int A, int B, int **C);
void AsignarDistancia(int**, int, int, int);
void Intercambio(int &, int &);
 
int main() { 
   int i;
   int **tabla;
 
   // Primer subíndice de A a D 
   tabla = new int*[NCIUDADES-1]; 
   // Segundo subíndice de B a E, 
   // define 4 arrays de 4, 3, 2 y 1 elemento: 
   for(i = 0; i < NCIUDADES-1; i++) 
      tabla[i] = new int[NCIUDADES-1-i]; // 4, 3, 2, 1 
   // Inicialización: 
   tabla[CIUDAD_A][CIUDAD_B-CIUDAD_A-1] = 154; 
   tabla[CIUDAD_A][CIUDAD_C-CIUDAD_A-1] = 245; 
   tabla[CIUDAD_A][CIUDAD_D-CIUDAD_A-1] = 54; 
   tabla[CIUDAD_A][CIUDAD_E-CIUDAD_A-1] = 452; 
   tabla[CIUDAD_B][CIUDAD_C-CIUDAD_B-1] = 354; 
   tabla[CIUDAD_B][CIUDAD_D-CIUDAD_B-1] = 125; 
   tabla[CIUDAD_B][CIUDAD_E-CIUDAD_B-1] = 133; 
   tabla[CIUDAD_C][CIUDAD_D-CIUDAD_C-1] = 152; 
   tabla[CIUDAD_C][CIUDAD_E-CIUDAD_C-1] = 232; 
   tabla[CIUDAD_D][CIUDAD_E-CIUDAD_D-1] = 110; 

   // Ejemplos:
   AsignarDistancia( tabla, CIUDAD_B, CIUDAD_E, 126 );
   cout << "Distancia A-D: " 
        << Distancia(CIUDAD_A, CIUDAD_D, tabla) << endl; 
   cout << "Distancia B-E: " 
        << Distancia(CIUDAD_B, CIUDAD_E, tabla) << endl; 
   cout << "Distancia D-A: " 
        << Distancia(CIUDAD_D, CIUDAD_A, tabla) << endl; 
   cout << "Distancia B-B: " 
        << Distancia(CIUDAD_B, CIUDAD_B, tabla) << endl; 
   cout << "Distancia E-D: " 
        << Distancia(CIUDAD_E, CIUDAD_D, tabla) << endl;
 
   // Liberar memoria dinámica: 
   for(i = 0; i < NCIUDADES-1; i++) delete[] tabla[i]; 
   delete[] tabla; 
   
   return 0; 
}
 
int Distancia(int A, int B, int **C) {
   int aux;
 
   // Si ambos subíndices son iguales, volver con cero: 
   if(A == B) return 0; 
   // Si el subíndice A es mayor que B, intercambiarlos: 
   if(A > B) {
       Intercambio(A,B);
   } 
   return C[A][B-A-1]; 
}

void AsignarDistancia(int **C , int ida, int destino, int distancia) {

    C[ida][destino-ida-1] = distancia;
}

void Intercambio(int &A, int &B) {
    int aux;
    aux = A; 
    A = B; 
    B = aux;
}