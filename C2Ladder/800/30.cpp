#include <iostream>

using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    if (a == b) {
        if (c % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    if (b == c) {
        if (a % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    if (a == c) {
        if (b % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }

    if (a + b == c || b + c == a || a + c == b) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}