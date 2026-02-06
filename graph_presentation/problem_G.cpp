#include <iostream>
    
using namespace std;
    
int main() {
    int n; cin >> n;
    int edges = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (x == 1) edges++;
        }
    }
    
    cout << edges << "\n";
    
    return 0;
}