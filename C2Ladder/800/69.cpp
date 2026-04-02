#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int ii = 0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        ii++;
        if (num > ii) ii += num - ii;
    }

    cout << abs(ii - n) << "\n";

}
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}