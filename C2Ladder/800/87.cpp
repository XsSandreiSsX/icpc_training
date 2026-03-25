#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    int prev; cin >> prev;

    int answer = 0;
    for (int i = 1, num; i < n; i++) {
        cin >> num;
        
        int mn = min(prev, num);
        int mx = max(prev, num);
        while (mn * 2 < mx) {
            mn *= 2;
            answer++;
        }

        prev = num;
        
    }

    cout << answer << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}