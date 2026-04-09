#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n; cin >> n;
    int even = 0; int odd = 0;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) even++;
        else odd++;
    }

    if (odd == 0 || even == 0) cout << "YES\n";
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