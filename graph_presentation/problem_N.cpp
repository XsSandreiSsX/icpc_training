#include <iostream>
#include <set>

using namespace std;

set <int> g[101];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        g[x].insert(y);
        g[y].insert(x);
    }

    for (int i = 1; i <= n; i++) {
        if (g[i].size() != n - 1) {
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << "YES" << "\n";
    return 0;
}