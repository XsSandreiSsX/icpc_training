#include <iostream>

using namespace std;

const int MAXN = 100005; 
const int MOD = 1e9 + 7;
const int p = 31;

long long st[MAXN];
long long hash1[MAXN];
int n = 0;

long long get_hash(int l, int r) {
    return (hash1[r] - hash1[l - 1] + MOD) * st[n - l] % MOD;
}

int main() {
    string s; cin >> s;

    n = s.size();
    s = "#" + s;
    st[0] = 1;
    for (int i = 1; i <= n; i++) {
        st[i] = (st[i - 1] * p) % MOD;
    }

    for (int i = 1; i <= n; i++) {
        hash1[i] = (hash1[i - 1] + (s[i] - 'a' + 1) * st[i]) % MOD;
    }

    int q; cin >> q;
    while(q--) {
        int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;

        if (r1 - l1 == r2 - l2 && get_hash(l1, r1) == get_hash(l2, r2)) {
            cout << "Yes" << "\n";    
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}