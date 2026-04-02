#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int k; cin >> k;
    cout << 100 / gcd(k, 100) << '\n';
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}