#include <iostream>
#include <unordered_set>

using namespace std;

const int MAXN = 2005;

const long long MOD = 1e9 + 7;
const long long MOD2 = 1e9 + 9;

const long long p = 31;
const long long p2 = 37;

long long st[MAXN], st2[MAXN];
long long hash1[MAXN], hash2[MAXN];

unordered_set<long long> cnt;

int n;

long long get_hash(int l, int r) {
    long long h1 = (hash1[r] - hash1[l - 1] + MOD) % MOD;
    h1 = h1 * st[n - l] % MOD;

    long long h2 = (hash2[r] - hash2[l - 1] + MOD2) % MOD2;
    h2 = h2 * st2[n - l] % MOD2;

    return (h1 << 32) ^ h2;
}

int main() {
    string s; cin >> s;
    n = s.size();
    s = "#" + s;

    st[0] = st2[0] = 1;
    for (int i = 1; i <= n; i++) {
        st[i] = st[i - 1] * p % MOD;
        st2[i] = st2[i - 1] * p2 % MOD2;
    }

    for (int i = 1; i <= n; i++) {
        hash1[i] = (hash1[i - 1] + (s[i] - 'a' + 1) * st[i]) % MOD;
        hash2[i] = (hash2[i - 1] + (s[i] - 'a' + 1) * st2[i]) % MOD2;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cnt.insert(get_hash(i, j));
        }
    }

    cout << cnt.size() << "\n";
}