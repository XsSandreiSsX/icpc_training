#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 101;

vector <vector <int>> pole(MAXN, vector<int>(MAXN));
bool was[MAXN][MAXN];
int dist[MAXN][MAXN];
queue <pair <int, int>> q;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int n, m;

pair<int, int> roll(int x, int y, int dir) {
    while (true) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 1 || nx > n || ny < 1 || ny > m) return {x, y};

        int cell = pole[nx][ny];

        if (cell == 1) return {x, y};

        if (cell == 2) return {-1, -1};

        x = nx;
        y = ny;
    }
    
}
int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1, x; j <= m; j++) {
            dist[i][j] = -1;
            cin >> x;
            pole[i][j] = x;
        }
    }

    dist[1][1] = 0;
    was[1][1] = true;
    q.push({1, 1});

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            auto [tox, toy] = roll(x, y, i);

            if (tox == x && toy == y) continue;

            if (tox == -1) {
                cout << dist[x][y] + 1 << "\n";
                return 0;
            }

            if (!was[tox][toy]) {
                was[tox][toy] = true;
                dist[tox][toy] = dist[x][y] + 1;
                q.push({tox, toy});
            }
        }
    }

    return 0;
}


