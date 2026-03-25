#include <iostream>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)


using namespace std;

void solve() {
    long long n, m, x; cin >> n >> m >> x;
    x--;
    long long col = x / n;
    long long row = x % n;
    cout << row * m + col + 1 << "\n";

}

int main() {
    IOS;
    int t; cin >> t;
    while(t -- ) {
        solve();
    }
}