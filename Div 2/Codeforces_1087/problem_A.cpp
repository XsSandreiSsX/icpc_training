#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n; cin >> n;
    long long c, k; cin >> c >> k;
    vector <long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    sort(arr.begin(), arr.end());

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    // cout << "arr[0] =" << arr[0] << "\n" << "c = " << c << "\n";
    if (arr[0] > c) {
        cout << c << "\n";
        return;
    }
    // cout << "Letsgo\n";
    for (int i = 0; i < n; i++) {
        long long d = min(c - arr[i], k);
        if (c >= arr[i]) {
            c += arr[i];
            if (d > 0 ) {
                c += d;
                k -= d;
            }
        } else {
            break;
        }
         
    }

    cout << c << "\n";



}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}