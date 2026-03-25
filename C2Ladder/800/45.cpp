#include <iostream>

using namespace std;

void solve() {
    string s; cin >> s;

    if (s.size() % 2 == 1) {
        cout << "NO\n";
        return; 
    }

    int mid = s.size() / 2;
    for (int i = 0; i < mid; i++) {
        if (s[i] != s[mid+i]) {
            cout << "NO\n";
            return;
        }

    }

    cout << "YES\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}