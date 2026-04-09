#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') cnt++;
    }

    if (cnt) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main() {
    //IOS;
    //int t; cin >> t;
    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}