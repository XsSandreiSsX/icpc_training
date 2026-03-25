#include <iostream>

using namespace std;

int binpow(int a, int n) {
    int res = 1;
    while (n != 0) {
        if (n & 1)
            res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

void solve() {
    int n; cin >> n;

    int cnt = 0;
    int nn = n;
    while(nn > 0) {
        nn /= 10;
        cnt++;
    }

    int ans = 9 * (cnt - 1);
    
    int cur = 0;
    for(int i = 0; i < cnt; i++) {
        cur += binpow(10, i);
    }
    
    for (int i = cur; i <= n; i += cur) ans++;
    cout << ans << "\n";


}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}