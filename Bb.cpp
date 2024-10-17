#include <iostream>
using namespace std;
int main(){
    int a , next, prev;
    cin >> a;
    next = a + 1;
    cout << "The next number for the number " << a << " is " << next;
    
    prev = a - 1;
    cout << "The previous number for the number " << a << " is " << prev;
}
