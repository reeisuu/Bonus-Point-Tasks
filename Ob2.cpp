#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 && b == 0) {
        if (c != 0) {
            cout << "INF";
        } else {
            if (d == 0) {
                cout << "INF";
            } else {
                cout << "NO";
            }
        }
    } else if (a == 0) {
        cout << "NO";
    } else {
        if (-b % a == 0) {  
            int x = -b / a;
            if (c * x + d != 0) {
                cout << x;
            } else {
                cout << "NO";
            }
        } else {
            cout << "NO"; 
        }
    }

    return 0;
}