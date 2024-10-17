#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 2; i <= a; i++){
        if( a %  i == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << a << endl;
    return 0;
}