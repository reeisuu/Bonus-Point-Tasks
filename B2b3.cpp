#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  

    int i = 2;  
    while (N % i != 0) {  
        i++; 
    }

    cout << i << endl;  
}