#include <iostream>
using namespace std;
int main(){
    int a, b, x;
    cin >> a >> b;
    x = -b/a;
    if (x != 0){
        cout << "NO";
    } else if(x == 0){
        cout << "INF";
    } else{
        cout << x;
    }
    return 0;
}
