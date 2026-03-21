#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 101;

int dp[MAXN];
vector <int> pos(MAXN);

int main() {
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> pos[i];
    }

    sort(pos.begin() + 1, pos.begin() + n + 1);

    dp[2] = pos[2] - pos[1];

    if (n >= 3) {
        dp[3] = pos[3] - pos[2] + dp[2];
    }
    if (n >= 4) {
        dp[4] = pos[4] - pos[3] + dp[2];
    }

    for (int i = 5; i <= n; i++) {
        dp[i] = pos[i] - pos[i-1] + min(dp[i-1], dp[i-2]);
    }

    cout << dp[n] << "\n";

    return 0;
}