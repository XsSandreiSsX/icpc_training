#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, d; cin >> n >> d;
    vector <int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if (arr[n-1] <= d) {
        cout << "YES\n";
    } else {
        if (arr[0] + arr[1] > d) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}
int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}