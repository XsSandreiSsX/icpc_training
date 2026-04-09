#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int x, n, m; cin >> x >> n >> m;

    if (m * 10 >= x) {
        cout << "YES\n";
        return;
    }

    while(x > 0 && n--) {
        x /= 2;
        x += 10;
    }

    while(m--) {
        x -= 10;
    }

    if (x <= 0) cout << "YES\n";
    else cout << "NO\n";

}

int main() {
    //IOS;
    int t; cin >> t;
    //int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}