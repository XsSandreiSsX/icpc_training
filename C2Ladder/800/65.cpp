#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int n; cin >> n;

    bool ok = true;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        int sqr = sqrt(num);
        if (sqr * sqr == num) {
            ok = false;
        }
    }

    if (ok) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}