// 25005
// 2
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n, k; cin >> n >> k;
    int q = n / k;
    int r = n % k;

    cout << q * k + min(r, k/2) << "\n";
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