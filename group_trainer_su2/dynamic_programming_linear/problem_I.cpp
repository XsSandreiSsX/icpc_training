#include <iostream>

using namespace std;

const int MAXN = 21;

long long dp[MAXN][3];

int main() {
    int n; cin >> n;
    dp[1][0] = 1; dp[1][1] = 1; dp[1][2] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2];
        dp[i][1] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2];
        dp[i][2] = dp[i-1][0] + dp[i-1][1];
    }

    cout << dp[n][0] + dp[n][1] + dp[n][2] << "\n";
}