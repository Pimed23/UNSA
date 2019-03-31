#include <iostream>
using namespace std;

long numero_divisores(long n) {
    long d = 2, cont = 0, divisores = 1;
    while (n > 1) {
        if (n % d != 0) {
            if (cont != 0)
                divisores = divisores * (cont + 1);
            d = d + 1;
            cont = 0;}
        else {
            cont = cont + 1;
            n = n / d;}}
    divisores = divisores * (cont + 1);
    return divisores;}

long triangular_number(long n) {
    long triangular = n * (n + 1) / 2;
    return triangular;}

int main() {
    long r = 1;
    while(numero_divisores(triangular_number(r)) < 500) {
        r = r + 1;}
    cout << triangular_number(r) << endl;
    return 0;
}

