#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') cout << "D";
        else if (s[i] == 'D') cout << "U";
        else cout << s[i];
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