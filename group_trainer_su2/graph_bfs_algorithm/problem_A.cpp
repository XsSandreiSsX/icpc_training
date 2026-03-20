#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAXN = 101;

vector <int> g[MAXN];
queue <int> q;
bool was[MAXN];
int dist[MAXN];

int main() {
    int n, m; cin >> n >> m;
    for (int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
        
    }

    int start, end;
    cin >> start >> end;

    for (int i = 0; i <= n; i++) {
        dist[i] = -1;
    }

    was[start] = true;
    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int to : g[v]) {
            if (!was[to]) {
                was[to] = true;
                dist[to] = dist[v] + 1;
                q.push(to);
            }
        }
    }

    cout << dist[end] << "\n";

    return 0;
}






