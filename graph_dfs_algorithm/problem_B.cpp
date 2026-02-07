#include <iostream>
#include <vector>

const int MAXN = 1e5 + 1;

using namespace std;

vector <int> g[MAXN];
bool was[MAXN];

void dfs(int v) {
    was[v] = true;

    for (int to : g[v]) {
        if (!was[to]) {
            dfs(to);
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!was[i]) {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << "\n";

}