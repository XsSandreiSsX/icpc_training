#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    
    int mmax = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num >= mmax) {
            mmax = num;
            count++;
        }
    }

    cout << count << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}