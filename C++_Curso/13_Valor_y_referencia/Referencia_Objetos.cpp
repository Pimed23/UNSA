#include <iostream>
using namespace std;
 
int main() { 
   int a; 
   int &r = a;
 
   a = 10; 
   cout << r << endl; 
   
   return 0; 
}