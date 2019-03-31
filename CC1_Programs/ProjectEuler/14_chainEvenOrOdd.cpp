#include <iostream>
using namespace std;

long even_odd (long n) {
    if (n % 2 == 0) 
        return n / 2;
    else
        return 3 * n + 1;}

long len_chain (long n) {
    long long cont = 1;
    while (n > 1) {
        n = even_odd(n);
        cont = cont + 1;}
    return cont;}

int main() {
    long mayor = 0, cad;
    for (long i = 1; i <= 999999; i++) {
        long x = len_chain(i);
        if (mayor <= x) {
            mayor = x;
            cad = i;}}
    cout << cad << endl;
    return 0;
}
        
    
