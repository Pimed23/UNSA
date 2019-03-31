#include <iostream>
using namespace std;

int main() {
	long size, mult = 1, max = 1;
	string num;
	cin >> num;
	size = num.length();
	
	for (int j = 0; j <= (size - 13); j++) {
		for (int i = j; i < (j + 13); i++) {
			mult = mult * (num[i] - '0');}
		if (mult > max)
			max = mult;
		mult = 1;}
	cout << max << endl;
	return 0;
}
