#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n; cin >> n;
    vector <int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    int mid = n / 2;

    int sumy = 0;
    for (int i = 0; i < mid; i++) {
        sumy += arr[i];
    }

    int sumx = 0;
    for (int i = mid; i < n; i++) {
        sumx += arr[i];
    }

    cout << 1LL * sumy * sumy + 1LL * sumx * sumx << "\n";
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