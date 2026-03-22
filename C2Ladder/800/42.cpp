#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (s.size() == 1) {
        cout << "YES\n";
    } else if (s.size() == 2) {
        if (s[0] != s[1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    }


}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}