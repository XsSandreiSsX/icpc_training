#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;

long long binpow(long long a, long long n, long long mod) {
    long long res = 1;
    a %= mod;
    while (n > 0) {
        if (n % 2 == 1 ) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        n /= 2;

    }
    return res;
}   

int main() {
    int n; cin >> n;
    if (n == 0) {
        cout << "2\n";
        return 0;
    }
    cout << binpow(3, n, MOD) % MOD + 1 << "\n";
    return 0;

    
}