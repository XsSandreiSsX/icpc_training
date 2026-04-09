#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n, k; cin >> n >> k;
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
    }

    if (sum % 2 != 0 ) {
        cout << "YES\n";
        return;
    }

    if (k * n % 2 == 0) cout << "YES\n";
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