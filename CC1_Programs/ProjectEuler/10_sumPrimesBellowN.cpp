#include <iostream>
#include <math.h>
using namespace std;

int main() {
	unsigned long long n;
	cin >> n;
	int j = 3;
	unsigned long long a[n] = {2, 3};
	unsigned long long len = 2, cont = 0, sum = 0;
	bool x;
	
	while (j <= n) {
		for (int i = 0; i < len; i++) {
			if (j % a[i] == 0) {
				x = false;
				break;}}

		if (x == true) {
			a[len] = j;
			len = len + 1;}
		else
			x = true;
		j = j + 2;}

	for (int k = 0; k < n; k++) {
		sum = sum + a[k];}
	
	cout << sum << endl;
	return 0;
}
