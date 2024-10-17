#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        int square = i * i;
        if (square >= a && square <= b) {
            cout << square << " ";
        }
    }
    return 0;
}