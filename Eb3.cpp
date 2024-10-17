#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int k = 0;  
    int power = 1;  

   
    while (power < N) {
        power *= 2;  
        k++;        
    }

    cout << k << endl;  
    return 0;
}