#include <iostream>

using namespace std;

const int MAXN = 51;

long long dp[MAXN];

int main() {
    int n; cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];

    }

    cout << dp[n] << "\n";

    return 0;
}