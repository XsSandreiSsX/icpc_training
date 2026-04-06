#include <iostream>

using namespace std;

void solve() {
    int s; cin >> s;

    int ans = 1;
    int sum = 1;
    int n = 1;
    while(sum < s) {
        n += 2;
        sum += n;
        ans++;
    }

    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}