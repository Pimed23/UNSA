#include <iostream>
using namespace std;

int main() {
	int sum;
	for (int i = 1; i <= 998; i++) {
		for (int j = 1; j <= 998; j++) {
			for (int k = 1; k <= 998; k++) {
				sum = i + j + k;
				if (sum == 1000 && i < j && j < k && (i * i + j * j == k * k)) {
					cout << i * j * k << endl;}}}}
	return 0;
}
