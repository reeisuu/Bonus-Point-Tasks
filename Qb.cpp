#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n, m ;
    cin >> n >> m;
    int a = (m + n - 1) / n;
    cout << round(a);
    return 0;
}
