#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 101;

vector <int> g[MAXN];
int was[MAXN] = {0};
bool success = true;


void dfs(int v, int color) {
    was[v] = color;

    for (int to : g[v]) {
        if (was[to] == 0) {
            dfs(to, 3 - color);
        } else if (was[to] == color) {
            success = false;
        }
    }
}


int main() {
    int n, m; cin >> n >> m;

    if (m == 0) {
        cout << "YES" << "\n";
        cout << n << "\n";
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        return 0;
    }

    for (int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        if (was[i] == 0)
        dfs(i, 1);
    }

    if (!success) {
        cout << "NO" << "\n";
    } else {
        vector <int> first;
        for (int i = 1; i <= n; i++) {
            if (was[i] == 1) first.push_back(i);
        }
        cout << "YES" << "\n";
        cout << first.size() << "\n";
        for (int i = 0; i < first.size(); i++) {
            cout << first[i] << " ";
        }

    }


}

