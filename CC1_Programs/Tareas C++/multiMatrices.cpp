#include <iostream>
using namespace std;

int main() {
    
    int x, y, z;

    cout << "MATRIZ A" << endl;
    cout << "Numero de filas: "; cin >> x;
    cout << "Numero de columnas: "; cin >> y;
    int A[x][y];
    
    for(int i = 0; i < x; i++) {
        for(int j = 0;j < y;j++) {
            cout << "Ingrese valor [" << i << "][" << j << "]: ";
            cin >> A[i][j];}}                                                                                   

    cout << endl;
    cout << "MATRIZ B" << endl;
    cout << "Numero de filas: " << y << endl;
    cout << "Numero de columnas: "; cin >> z;
    int B[y][z];

    for(int i = 0; i < y; ++i) {
        for(int j = 0; j < z; ++j) {
            cout << "Ingrese valor[" << i << "][" << j << "]: ";
            cin >> B[i][j];}}
    
    int C[x][z];
    for (int i = 0; i < x; i++) {
        for (int j = 0;j < z; j++) {
            C[i][j] = 0;
                for (int k = 0;k < y; k++) {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];}}}
    
    cout << endl;
    cout << "MATRIZ C: " << endl;
    for(int i = 0; i < x; ++i) {
        for(int j = 0; j < z; ++j) {
            cout<<C[i][j]<<" "; }
        cout<<endl;}

    return 0;
}

