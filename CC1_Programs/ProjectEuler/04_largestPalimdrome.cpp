#include <iostream>
using namespace std;

bool esPalindromo(string cad, int tam){
    for(int i = 0; i < tam / 2; i++)
        if(cad[i] != cad[tam - i - 1])
            return false;
    return true;}

int main () {
	int mayor = 0;
	for (int i = 999; i > 100; i--) {
		for (int j = 999; j > 100; j--) {
			long h = i * j;
			string x = to_string(h);
			int t = x.length();
			if (esPalindromo(x, t) == true && h > mayor)
				mayor = h;}}
	cout << mayor << endl;
	return 0;
}
