#include <iostream>

using namespace std;

void solve() {
    long long n; cin >> n;
    
    if (n % 7 == 0) cout << n << "\n";
    else {
        long long ans = -1;
        for (int i = 1; i < 10; i++) {
            if ((n - n % 10 + i) % 7 == 0) ans = n - n % 10 + i;
        }

        cout << ans << "\n";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}