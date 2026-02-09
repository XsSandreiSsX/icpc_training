#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 101;

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
    int n, k, m; cin >> n >> k >> m;

    for (int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
    }

    dfs(k);

    for (int i = 1; i <= n; i++) {
        if (i == k) continue;
        
        if (!was[i]) {
            cout << "No\n";
            return 0; 
        }
    }

    cout << "Yes\n";
    return 0;

}