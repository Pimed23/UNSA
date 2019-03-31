#include <iostream>
#include <cmath>

using namespace std;
 
double VelocidadFinal(double h, double v0=0.0, double g=9.8);
 
int main() { 
    
   cout << "Velocidad final en caida libre desde 100 metros,\n" <<
      "partiendo del reposo en la Tierra" <<
      VelocidadFinal(100) << "m/s" << endl; 
   cout << "Velocidad final en caida libre desde 100 metros,\n" <<
      "con una velocidad inicial de 10m/s en la Tierra" <<
      VelocidadFinal(100, 10) << "m/s" << endl; 
   cout << "Velocidad final en caida libre desde 100 metros,\n" <<
      "partiendo del reposo en la Luna" <<
      VelocidadFinal(100, 0, 1.6) << "m/s" << endl; 
   cout << "Velocidad final en caida libre desde 100 metros,\n" <<
      "con una velocidad inical de 10m/s en la Luna" <<
      VelocidadFinal(100, 10, 1.6) << "m/s" << endl; 
   return 0;
}
 
double VelocidadFinal(double h, double v0, double g) {
   double t = (-v0+sqrt(v0*v0 + 2*g*h))/g;
   return v0 + g*t;
}