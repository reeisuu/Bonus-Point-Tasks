#include <iostream>
using namespace std;

unsigned char ToUpper(unsigned char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main() {
    char c;
    cin >> c;

    
    cout << ToUpper(c) << endl;

}