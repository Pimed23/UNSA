#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream arch;
    arch.open("File2.txt", ios::out );
    arch << "This is the second archive";
    arch.close();
    return 0;
}