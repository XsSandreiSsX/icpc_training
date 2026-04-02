#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n; cin >> n;
    long long l, r, k; cin >> l >> r >> k;
    vector <long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    long long ssum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < l || arr[i] > r) continue;

        if (ssum + arr[i] <= k) {
            ssum += arr[i];
            cnt++;
        }
    }

    cout << cnt << "\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}