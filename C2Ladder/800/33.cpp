#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector <pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first; 
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i].second; 
    }

    sort(arr.begin(), arr.end());

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i].first << " " << arr[i].second << "\n";
    // }

    for (int i = 0; i < n; i++) {
        if (arr[i].first <= k) {
            k += arr[i].second;
        }
    }

    cout << k << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}