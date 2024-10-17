#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    cin >> n; 

    int hours = (n / 3600) % 24; 
    n %= 3600; 
    int minutes = n / 60; 
    int seconds = n % 60; 

    if (hours >= 12) {
        hours -= 12;
    }
    if (hours == 0) {
        hours = 12; 
    }

    cout << hours << ":" 
         << setw(2) << setfill('0') << minutes << ":" 
         << setw(2) << setfill('0') << seconds << endl;

    return 0;
}
