#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int cnt = 1;
    
    for (long long i = 2; i * i <= n; i++) cnt++;
    for (long long i = 2; i * i * i <= n; i++) cnt++;
    for (long long i = 2; i * i * i * i * i * i <= n; i++) cnt--;

    cout << cnt << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}