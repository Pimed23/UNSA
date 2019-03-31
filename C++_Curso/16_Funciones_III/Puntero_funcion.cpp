#include <iostream>
using namespace std;

int Muestra1();
int Muestra2();
int Muestra3();
int Muestra4();

int main() {
   int ( *pf1 )();  
   // Puntero a función sin argumentos que devuelve un int.
   int num;
   
   do {
      cout << "Introduce un número entre 1 y 4, "
           << "0 para salir: ";
      cin >> num;
      if(num >= 1 && num <=4) {
         switch(num) {
            case 1: 
               pf1 = Muestra1;
               break;
            case 2: 
               pf1 = Muestra2;
               break;
            case 3: 
               pf1 = Muestra3;
               break;
            case 4: 
               pf1 = Muestra4;
               break;
         }
         pf1();
      }
   } while(num != 0);
   
   return 0;
}

int Muestra1() {
   cout << "Muestra 1" << endl;
   return 1;
}

int Muestra2() {
   cout << "Muestra 2" << endl;
   return 2;
}

int Muestra3() {
   cout << "Muestra 3" << endl;
   return 3;
}

int Muestra4() {
   cout << "Muestra 4" << endl;
   return 4;
}