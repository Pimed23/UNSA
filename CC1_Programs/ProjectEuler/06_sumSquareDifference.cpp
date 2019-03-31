#include <iostream>
using namespace std;

int main() {
	long n, m = 0, sum_sqr = 0, sqr_sum;
	for (int i = 1; i <= 100; i++) {
		n = i * i;
		sum_sqr = sum_sqr + n;}
	
	for (int j = 1; j <= 100; j++) {
		m = m + j;}
	sqr_sum = m * m;
	cout << sqr_sum - sum_sqr << endl;
	
	return 0;
}

		
