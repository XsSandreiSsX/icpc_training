#include <iostream>

using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();

    int iA = -1;
    for (int i = 0; i < n; i++) if (s[i] == 'a') iA = i;
    if (iA == -1) {
        cout << "NO\n";
        return;
    }
    if (n == 1) {
        cout << "YES\n";
        return;
    }

    int left = iA - 1;
    int right = iA + 1;
    char prev = 'a';
    for (int i = 1; i < n; i++) {
        if (left >= 0 && s[left] == prev + 1) {
            prev = s[left];
            left--;
        } else if (right < n && s[right] == prev + 1) {
            prev = s[right];
            right++;
        } else {
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
}