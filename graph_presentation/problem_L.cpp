#include <iostream>
#include <vector>

using namespace std;

vector <int> g[101];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        cout << g[i].size() << " ";
    }


    return 0;
}