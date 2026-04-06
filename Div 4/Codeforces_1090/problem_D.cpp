#include <iostream>
#include <vector>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const int MAXN = 200000;
vector<int> primes;

void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << 1LL * primes[i] * primes[i + 1] << " ";
    }
    cout << "\n";
}

int main() {
    IOS;
    vector<bool> is_prime(MAXN + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= MAXN; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}