#include <iostream>

using namespace std;

void solve() {
    long long n; cin >> n;
    
    long long p = 1;
    while (p <= n) p <<= 1;
    
    p >>= 1;

    cout << p - 1 << "\n";
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}