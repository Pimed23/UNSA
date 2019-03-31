#include <iostream>
using namespace std;
 
inline int mayor(int a, int b) {
   if(a > b) return a; 
   return b; 
}
 
int main() {
   cout << "El mayor de 12,32 es " << mayor( 12, 32 ) << endl; 
   cout << "El mayor de 6,21 es " << mayor( 6, 21 ) << endl; 
   cout << "El mayor de 14,34 es " << mayor( 14, 34 ) << endl; 
   
   return 0; 
}