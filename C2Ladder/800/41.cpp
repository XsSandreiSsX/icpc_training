#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long arr[3];
    long long mmax = LONG_LONG_MIN;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];

        if (arr[i] > mmax) {
            mmax = arr[i];
        }
    }

    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i] == mmax) {
            cnt++;
        }
    }

    bool isOne = (cnt == 1);
    for (int i = 0; i < 3; i++) {
        if (arr[i] == mmax && isOne) cout << 0 << " ";
        else cout << mmax - arr[i] + 1 << " ";
    }
    cout << "\n";


}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}