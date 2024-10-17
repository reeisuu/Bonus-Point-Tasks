#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, first, second, third;
    cin >> a;
    first = a / 100;
    second = (a / 10) % 10;
    third = a % 10;
    cout << first + second + third;
}