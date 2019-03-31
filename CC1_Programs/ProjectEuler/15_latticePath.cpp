#include <iostream>
using namespace std;

long long count_paths(int n) {
    long long paths = 1;
    for (int i = 1; i <= n; i++) {
        paths = paths * (n + i) / i;}
    return paths;}
    
int main() {
    int x; 
    cin >> x;
    cout << count_paths(x) << endl;
    return 0;
}
