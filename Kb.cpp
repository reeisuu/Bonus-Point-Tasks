#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    n %= 1440;

    int hours = n / 60; 
    int minutes = n % 60; 

    cout << hours << " " << minutes << endl; // Выводим результат
    return 0;
}
