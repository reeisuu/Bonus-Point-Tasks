#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int a, b, c, cnt = 1;
    cin >> a >> b >> c;
    if(a == b && b == a){
        cnt += 1;
    } 
    if(b == c && c == b){
        cnt += 1;
    }
    if (a == c && c == a ){
        cnt += 1;
    }
    cout << cnt;
    return 0;
}

