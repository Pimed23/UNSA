#include <iostream>
using namespace std;

bool divisor (int x) {
	for (int i = 2; i <= 20; i++) {
		if (x % i > 0) {
			return false;}}
	return true;}

int main() {
	int n = 1;
	while (true) {
		if (divisor(n) == true) {
			cout << n << endl;
			return false;}
		else
			n = n + 1;}
	return 0;
}

