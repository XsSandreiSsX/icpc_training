#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAXN = 21;

queue <pair <int, int>> q;
bool was[MAXN][MAXN];
int dist[MAXN][MAXN];

int dx[] = {-1, 1, -1, 1, -2, -2, 2, 2};
int dy[] = {2, 2, -2, -2, -1, 1, -1, 1};

bool check(int x, int y, int n) {
    return (1 <= x && x <= n && 1 <= y && y <= n);
}

int main() {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dist[i][j] = -1;
        }
    }

    was[x1][y1] = true;
    dist[x1][y1] = 0;
    q.push({x1, y1});

    while (!q.empty()) {
        pair v = q.front();
        int x = v.first;
        int y = v.second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int tox = x + dx[i];
            int toy = y + dy[i];

            if (check(tox, toy, n) && !was[tox][toy]) {
                was[tox][toy] = true;
                dist[tox][toy] = dist[x][y] + 1;
                q.push({tox, toy});
            }
        }

    }

    cout << dist[x2][y2] << "\n";

    return 0;
}
