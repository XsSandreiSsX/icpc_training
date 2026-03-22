#include <iostream>

using namespace std;

void solve() {
    long long a, b; cin >> a >> b;
    long long delta = abs(b - a);

    if (delta == 0) {
        cout << 0 << "\n";
        return;
    }
    
    long long count = delta / 10;
    if (delta % 10 != 0) count++;

    cout << count << "\n";
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}