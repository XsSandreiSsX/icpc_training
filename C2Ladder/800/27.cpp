#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    
    int cnt1 = 0;
    int cnt2 = 0;
    
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x == 1) cnt1++;
        else cnt2++;
    }

    if ((cnt2 * 2 + cnt1) % 2 != 0) {
        cout << "NO\n";
        return; 
    }

    int psum = (cnt2 * 2 + cnt1) / 2;
    int p = 0;
    
    if (psum % 2 == 0 || (psum % 2 == 1 && cnt1 != 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}