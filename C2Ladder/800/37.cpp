#include <iostream>
#include <map>

using namespace std;


void solve() {
    int n; cin >> n;
    map <int, int> arr;

    for (int i = 0, num ; i < n; i++) {
        cin >> num;
        arr[abs(num)]++;
    }

    int ans = 0;
    for (auto [x, c] : arr) {
        if (x == 0) ans += 1;
        else ans += min(c, 2);
    }

    cout << ans << "\n";
    
}

int main() {
    int t; cin >> t;
    
    while(t--) {
        solve();
    }
}

