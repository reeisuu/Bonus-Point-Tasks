#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    int x_max = 0, y_max = 0;  
    double max_dist2 = -1;    
    
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        
        double dist2 = x * x + y * y;
   
        if (dist2 > max_dist2) {
            max_dist2 = dist2;
            x_max = x;
            y_max = y;
        }
    }
    
    
    cout << x_max << " " << y_max << endl;
}