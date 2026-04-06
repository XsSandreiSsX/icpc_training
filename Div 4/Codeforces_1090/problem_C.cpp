#include <iostream>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;

void solve() {
    int n; cin >> n;
    
    int nn = 0;
    for (int i = 1; i <= n; i++) {
        cout << i << " " << i + n + nn << " " << i + n + nn + 1 << " ";
        nn++;
    }
    cout << "\n";

}

int main() {
    IOS;
    int t; cin >> t;
    while(t--) {
        solve();
    }
}