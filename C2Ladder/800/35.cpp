#include <iostream>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int MAXN = 100007;

long long pref[MAXN];

int main() {
    IOS;
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        char let; cin >> let;
        pref[i] = pref[i - 1] + (let - 97 + 1);
    }

    while(q--) {
        int l, r; cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }
}