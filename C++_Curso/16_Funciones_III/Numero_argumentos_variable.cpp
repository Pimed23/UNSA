#include <iostream> 
#include <cstdarg>
using namespace std;
 
void funcion(int a, ...);
 
int main() {
   funcion(1, "cadena 1", 0); 
   funcion(1, "cadena 1", "cadena 2", "cadena 3", 0); 
   funcion(1, 0); 
   
   return 0; 
}
 
void funcion(int a, ...) {
   va_list p; 
   va_start( p, a ); 
   char *arg;
 
   while (( arg = va_arg( p, char* ))) {
      cout << arg << " "; 
   } 
   va_end( p ); 
   cout << endl; 
}