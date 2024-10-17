#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a % 2 == 0){
        cout << "YES"; 
    } else if(b % 2 == 0){
        cout << "YES"; 
    } else if(c % 2 == 0){
        cout << "YES"; 
    } else{
        cout << "NO";
    }
    cout << endl;
    return 0;
}
