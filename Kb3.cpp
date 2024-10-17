#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, num;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        sum += num;
    }
    
    cout << sum << endl;
    
    return 0;
}