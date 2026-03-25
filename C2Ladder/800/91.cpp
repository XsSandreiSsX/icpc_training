#include <iostream>

using namespace std;

void solve() {
    int n, m, r1, c1, r2, c2; cin >> n >> m >> r1 >> c1 >> r2 >> c2;
    
    int lenN = abs(r2 - r1);
    int lenM = abs(c2 - c1);

    if (r1 > r2) {
        lenN += (n-r1) * 2;
    }

    if (c1 > c2) {
        lenM += (m-c1) * 2;
    }

    cout << min(lenN, lenM) << "\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}