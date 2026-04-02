#include <iostream>

using namespace std;

void solve() {
    int l, r; cin >> l >> r;
    if (l == r) {
        cout << "0\n";
        return;
    }

    int answer = r / 2 + 1;
    if (l <= answer) {
        cout << r - answer << "\n";
    } else {
        cout << r - l << "\n";
    }

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}