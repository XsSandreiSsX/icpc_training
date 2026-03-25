#include <iostream>

using namespace std;

const int MAXN = 307;

void solve() {
    int n; cin >> n;
    long long arr[MAXN];
    long long ans[MAXN];
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int mid = (n + 1) / 2;

    int indx = 1;
    for (int i = 1; i <= mid; i++) {
        ans[indx] = arr[i];
        indx += 2;
    }

    indx = 2 * (n - mid);
    for (int i = mid + 1; i <= n; i++) {
        ans[indx] = arr[i];
        indx -= 2;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}