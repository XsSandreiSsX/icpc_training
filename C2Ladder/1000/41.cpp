#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << "-1\n";
        return;
    }

    cout << "2";
    n--;
    for (int i = 0; i < n; i++) {
        cout << "3";
    }

    cout << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}