#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 101;

vector <int> g[MAXN];
int color[MAXN];
vector <int> order;
bool hasCycle = false;

void dfs(int v) {
    color[v] = 1;

    for (int to : g[v]) {
        if (color[to] == 0) {
            dfs(to);
            if (hasCycle) return;
        } else if (color[to] == 1) {
            hasCycle = true;
            return;
        } 
    }

    color[v] = 2;
    order.push_back(v);
}

int main() {
    int n, m; cin >> n >> m;
    for (int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
        
    }

    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) {
            dfs(i);
            if (hasCycle) {
                cout << "No";
                return 0; 
            }
        }

    }

    reverse(order.begin(), order.end());

    cout << "Yes" << "\n";

    for (int v : order) cout << v << " ";

    return 0;
}


