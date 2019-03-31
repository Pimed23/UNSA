#include <iostream>
using namespace std;

int main() {
	int n, cont = 0, resp;
	cin >> n;
	
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= n; i++) {
			if (j % i == 0) {
				cont = cont + 1;}}
		if (cont == 2)
			resp = j;
		else 
			n = n + 1;
		cont = 0;}
	cout << resp << endl;
	return 0;
}
