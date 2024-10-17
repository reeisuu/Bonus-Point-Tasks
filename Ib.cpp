#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b = a / 100;
    int c = a / 10;
    int d = c % 10;
    int e = a % 10;
    cout << b + d + e;
    return 0;
}
