#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 1; 
    while (i * i <= N) {  
        cout << i * i << " ";  
        i++;  
    }

    cout << endl;
    return 0;
}