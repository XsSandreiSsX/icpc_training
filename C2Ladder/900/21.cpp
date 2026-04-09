#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 9 << '\n';
        return;
    }

    if (n == 2) {
        cout << 98 << '\n';
        return;
    }

    cout << "989";
    for (int i = 0; i < n - 3; i++) {
        cout << (i % 10);
    }
    cout << '\n';

}

int main() {
    IOS;
    int t; cin >> t;
    //int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}