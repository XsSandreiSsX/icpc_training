#include <iostream>

using namespace std;

const int MAXN = 30007;

long long dp[MAXN];
int cost[MAXN];

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
    }
    dp[1] = 0;
    dp[2] = abs(cost[2] - cost[1]);

    for (int i = 3; i <= n; i++) {
        dp[i] = min(dp[i-1] + abs(cost[i] - cost[i-1]), dp[i-2] + 3 * abs(cost[i] - cost[i-2])
);
    }

    cout << dp[n] << "\n";
    
    return 0;
}