#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1e6 + 7;

using namespace std;

int dp[MAXN];
int prev_dp[MAXN];

int main() {
    int n; cin >> n;
    dp[0] = -1;
    dp[1] = 0;

    for (int i = 2; i <= n; i++) {
        int oper = 1;
        dp[i] = dp[i-1] + 1;

        if (i % 2 == 0) {
            if (dp[i / 2] + 1 < dp[i]) {
                dp[i] = dp[i / 2] + 1;
                oper = 2;
            }
        }

        if (i % 3 == 0) {
            if (dp[i / 3] + 1 < dp[i]) {
                dp[i] = dp[i / 3] + 1;
                oper = 3;
            }
        }

        prev_dp[i] = oper;
    }

    int num = n;

    cout << dp[num] << "\n";

    vector <int> path;

    while (num != 1) {
        int op = prev_dp[num];
        path.push_back(op);
        if (op == 1) num -= 1;
        else if (op == 2) num /= 2;
        else if (op == 3) num /= 3;
    }

    for (int i = path.size() - 1; i >= 0; i--) {
        cout << path[i] << " ";
    }
    cout << "\n";

    
    

    return 0;
}
