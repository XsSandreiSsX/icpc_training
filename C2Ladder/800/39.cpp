#include <iostream>
#include <vector>

using namespace std;


void solve() {
    int n; cin >> n;
    vector <char> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if ((s[i] == 'a' && s[i+1] == 'b') || (s[i] == 'b' && s[i+1] == 'a')) {
            cout << i+1 << " " << i+2 << "\n";
            return;
        }
    }

    cout << "-1 -1\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}