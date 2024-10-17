#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    if (fabs((a + b) - c) < 1e-7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
}