#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    vector <int> arr(12);
    int k; cin >> k;
    if (k == 0) {
        cout << 0 << "\n";
        return;
    }
    int all = 0;
    for (int i = 0; i < 12; i++) {
        cin >> arr[i];
        all += arr[i];
    }
    if (all < k) {
        cout << "-1\n";
        return;
    }

    sort(arr.begin(), arr.end(), greater<int>());
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        if (sum < k) {
            sum += arr[i];
            cnt++;
        }
    }
    cout << cnt << "\n";
}

int main() {
    //IOS;
    //int t; cin >> t;
    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}