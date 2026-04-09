#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n, q; cin >> n >> q;
    string s; cin >> s;

    while(q--) {
        int l, r; cin >> l >> r;
        l--; r--;
        bool ok = false;
        for (int i = r+1; i < n; i++) {
            if (s[i] == s[r]) {
                ok = true;
            }
        }
        for (int i = 0; i < l; i++) {
            if (s[i] == s[l]) {
                ok = true;
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";

    }
}

int main() {
    //IOS;
    int t; cin >> t;
    //int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
