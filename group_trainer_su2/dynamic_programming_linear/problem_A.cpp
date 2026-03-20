#include <iostream>

using namespace std;

const int MAXN = 46;

int dp[MAXN];

int main() {
    int n; cin >> n;
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];

    }

    cout << dp[n] << "\n";

    return 0;
}