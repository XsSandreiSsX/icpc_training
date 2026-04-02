#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    map <int, int> let;
    int cnt = 1;
    let[s[0]] = 1;
    
    for (int i = 1; i < n; i++) {
        if (s[i-1] == s[i]) cnt++;
        else cnt = 1;

        if (let[s[i]] >= cnt) {
            cout << "NO\n";
            return;
        }
        
        let[s[i]] = cnt;
        
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