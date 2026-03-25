#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    string number; cin >> number;

    long long ssum = 0;
    long long cnt = 0;

    for (int i = 0; i < n; i++) {
        int digit = number[i] - '0';
        ssum += digit;

        if (i != n - 1 && digit > 0) {
            cnt++;
        }
    }

    cout << ssum + cnt << "\n";
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}