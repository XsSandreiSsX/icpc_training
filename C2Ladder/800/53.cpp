#include <iostream>

using namespace std;

void solve() {
    long long w, h, n; cin >> w >> h >> n;
    
    long long answer = 1;
    while (w % 2 == 0) {
        w /= 2;
        answer *= 2;
    }

    while(h % 2 == 0) {
        h /= 2;
        answer *= 2;
    }
    
    if (answer >= n) {
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