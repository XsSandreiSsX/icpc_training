#include <iostream>

using namespace std;

const int MAXN = 101;

void solve() {
    int n; cin >> n;
    int arr[MAXN];

    int mmin = 101;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < mmin) mmin = arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mmin) ans++;
    }

    cout << ans << "\n";
    
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}