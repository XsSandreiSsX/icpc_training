#include <iostream>

using namespace std;

const int MAXN = 101;

int dp[MAXN];

int main() {
    int n; cin >> n;
    dp[0] = 0;
    cin >> dp[1];

    for (int i = 2, ccost; i <= n; i++) {
        cin >> ccost;
        dp[i] = min(dp[i-1], dp[i-2]) + ccost;
    }

    cout << dp[n] << "\n";

    
     
}