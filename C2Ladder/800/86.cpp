#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int mmax = 0;
    int cnt = 0;
    int prev = -1;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (prev == -1) prev = num;
        
        if (prev == num) cnt++;
        else cnt = 1;

        mmax = max(mmax, cnt);
        prev = num;
    }

    cout << mmax << "\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}