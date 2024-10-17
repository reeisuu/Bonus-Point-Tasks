#include <iostream>
#include <iomanip> 
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    float c;
    c = sqrt(a*a + b*b);
    cout << fixed << setprecision(1) << c;
}
