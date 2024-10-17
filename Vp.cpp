#include <iostream>
#include <iomanip> 
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a == b){
        cout << a;
    } else if(b < a){
        cout << a;
    } else{
        cout << b;
    }
    
    return 0;
}
