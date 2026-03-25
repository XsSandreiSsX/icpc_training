#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> a(n);
    vector <int> b(n);

    int mx1 = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int mx2 = -1;
    for (int i = 0; i < n; i++) {
        mx1 = max(mx1, max(a[i], b[i]));
        mx2 = max(mx2, min(a[i], b[i]));
        
    }
    cout << mx1 * mx2 << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}