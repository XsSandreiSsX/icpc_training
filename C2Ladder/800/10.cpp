#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    long long mmax = -1;

    long long prev; cin >> prev;
    for (int i = 1; i < n; i++) {
        long long cur; cin >> cur;
        mmax = max(mmax, prev*cur);
        prev = cur;
    }

    cout << mmax << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}