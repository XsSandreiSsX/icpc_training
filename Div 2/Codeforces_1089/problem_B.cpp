#include <iostream>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long;
using namespace std;

const int MAXN = 200007;

void solve() {
    int n; cin >> n;
    int arr[MAXN];

    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num; cin >> num;
        if (num <= i) count++;
    }

    cout << count << "\n";

}

int main() {
    IOS;
    int t; cin >> t;
    while(t--) {
        solve();
    }
}