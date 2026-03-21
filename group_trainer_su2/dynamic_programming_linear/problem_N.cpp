#include <iostream>

using namespace std;

const int MAXN = 5001;

struct Price {
    int a, b, c;
} cost[MAXN];
int dp[MAXN];

int main() {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> cost[i].a >> cost[i].b >> cost[i].c;
    }

    dp[1] = cost[1].a;
    
    if (n >= 2) {
        dp[2] = min(dp[1] + cost[2].a, cost[1].b); 
    }

    // Оптимальная цена посчитанная, но добавление нового человека может изменить минимальную цену на текущем этапе
    for (int i = 3; i <= n; i++) {
        dp[i] = min(cost[i].a + dp[i-1], min(cost[i-1].b + dp[i-2], cost[i-2].c + dp[i-3]));
    }

    cout << dp[n] << "\n";

    return 0;
}