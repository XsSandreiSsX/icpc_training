#include <iostream>
#include <bits/stdc++.h>
#include <vector>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long;
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> a(n);
    vector <int> b(n);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        int want;

        if (i == 0) want = gcd(a[0], a[1]);
        else if (i == n - 1) want = gcd(a[n-1], a[n-2]);
        else want = lcm(gcd(a[i-1], a[i]), gcd(a[i], a[i+1]));

        if (want < a[i]) ans++;
        
    }

    cout << ans << "\n";
    
}

int main() {
    IOS;
    int t; cin >> t;
    while(t--) {
        solve();
    }
}