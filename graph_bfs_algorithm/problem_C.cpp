#include <iostream>
#include <queue>

using namespace std;

const int MAXN = 501;

queue <pair <int, int>> q;
bool was[MAXN][MAXN];
int dist[MAXN][MAXN];

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int n, m;

bool check(int x, int y) {
    return (1 <= x && x <= n && 1 <= y && y <= m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1, x; j <= m; j++) {
            dist[i][j] = -1;
            cin >> x;
            if (x == 1) {
                was[i][j] = true;
                dist[i][j] = 0;
                q.push({i, j});
            }
            
        }
    }

    while (!q.empty()) {
        pair v = q.front();
        int x = v.first;
        int y = v.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int tox = x + dx[i];
            int toy = y + dy[i];

            if (check(tox, toy) && !was[tox][toy]) {
                was[tox][toy] = true;
                dist[tox][toy] = dist[x][y] + 1;
                q.push({tox, toy});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
