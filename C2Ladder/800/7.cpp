#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;

    long long sum = 0;
    long long mmax = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        sum += x;
        mmax = max(mmax, x);
    }

    double ans = (double)mmax + (double)(sum - mmax) / (n - 1);
    cout << fixed << setprecision(9) << ans << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

