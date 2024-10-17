#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  

   
    while (N > 1) {
        if (N % 2 != 0) {  
            cout << "NO" << endl;
            return 0;
        }
        N /= 2;
    }

    cout << "YES" << endl;  
    return 0;
}