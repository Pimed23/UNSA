#include <iostream>
using namespace std;
 
int mayor(int a, int b); 
int mayor(int a, int b, int c); 
int mayor(int a, int b, int c, int d);
 
int main() {
   cout << mayor(10, 4) << endl;
   cout << mayor(15, 35, 23) << endl; 
   cout << mayor(10, 12, 12, 18) << endl; 
   
   return 0; 
}
 
int mayor(int a, int b) { 
   if(a > b) return a; else return b; 
}
 
int mayor(int a, int b, int c) { 
   return mayor(mayor(a, b), c); 
}
 
int mayor(int a, int b, int c, int d) { 
   return mayor(mayor(a, b), mayor(c, d)); 
}