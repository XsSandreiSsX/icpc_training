#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
        long long ssum = 0;
        for (int i = 0; i < n; i++) {
            long long number; cin >> number;
            ssum += number;
        }

        if (ssum % n == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
}