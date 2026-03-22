#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int odd = 0;
    for (int i = 0, x; i < 2 * n; i++) {
        cin >> x; 
        if (x % 2 == 1) {
            odd++;
        }
        
    }

    if (odd == n) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();

    }

    return 0;
}