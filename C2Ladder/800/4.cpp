#include <iostream>

using namespace std;

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (max(a, b) < min(c, d) || max(c, d) < min(a, b)) cout << "NO\n";
    else cout << "YES\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}