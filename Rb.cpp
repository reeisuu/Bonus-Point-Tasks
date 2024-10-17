#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int b  = (n + k - 1) / k; 
    int totalTime = b * 2 * m;

    cout << totalTime << endl;

    return 0;
}
