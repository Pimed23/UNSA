#include <iostream>
using namespace std;
 
int main() {
   char cadena1[] = "Cadena 1";
   char *cadena2 = "Cadena 2";
 
   cout << cadena1 << endl;
   cout << cadena2 << endl; 

   //cadena1++; // Ilegal, cadena1 es constante 
   cadena2++; // Legal, cadena2 es un puntero 

   cout << cadena1 << endl;  // C
   cout << cadena2 << endl;  // a
 
   cout << cadena1[1] << endl; //a
   cout << cadena2[0] << endl; //C
 
   cout << cadena1 + 2 << endl;  //d
   cout << cadena2 + 1 << endl;  //a
 
   cout << *(cadena1 + 2) << endl; //d
   cout << *(cadena2 + 1) << endl; //a
   
   return 0;
}