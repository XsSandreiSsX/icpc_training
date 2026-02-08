#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100001;

vector <int> g[MAXN];
bool was[MAXN];
int kitties[MAXN];

int n, m;
int cnt = 0;

void dfs(int v, int cats) {
    was[v] = true;

    if (kitties[v] == 1) cats++;
    else cats = 0;
    if (cats > m) return;

    bool isLeaf = (v != 1);

    for (int to : g[v]) {
        if (!was[to]) {
            isLeaf = false;
            was[to] = true;
            dfs(to, cats);
        }
    }

    if (isLeaf) cnt++;
}

int main() {
    cin >> n >> m;

    for (int i = 1, x; i <= n; i++) {
        cin >> x;
        kitties[i] = x;
    }

    for (int i = 1, x, y; i < n; i++) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1, 0);

    cout << cnt << "\n";
    return 0;

}
