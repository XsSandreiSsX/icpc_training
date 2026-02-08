#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100001;

vector <int> g[MAXN];
bool was[MAXN];

bool isCycle = true;

int n, m;

void dfs(int v) {
    was[v] = true;

    if (g[v].size() != 2) isCycle = false;

    for (int to : g[v]) {
        if (!was[to]) {
            dfs(to);
        }

    }
}

int main() {
    cin >> n >> m;

    for (int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int cycles = 0;
    for (int i = 1; i <= n; i++) {
        if (!was[i]) {
            isCycle = true;
            dfs(i);
            if (isCycle) cycles++;
        }
    }

    cout << cycles << "\n";


    return 0;
}