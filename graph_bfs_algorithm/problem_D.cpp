#include <iostream>
#include <queue>

using namespace std;

const int MAXN = 8;

queue <pair <int, int>> q;
bool was[MAXN][MAXN];
int dist[MAXN][MAXN];

int dx[] = {-1, 1, -1, 1, -2, -2, 2, 2};
int dy[] = {2, 2, -2, -2, -1, 1, -1, 1};


bool check(int x, int y) {
    return (1 <= x && x <= MAXN && 1 <= y && y <= MAXN);
}

int main() {
    for (int i = 1; i <= MAXN; i++) {
        for (int j = 1; j <= MAXN; j++) {
            dist[i][j] = -1;
        }
    }

    string s1, s2; cin >> s1 >> s2;
    int x1 = s1[0] - 'a' + 1;
    int y1 = s1[1] - '0';
    int x2 = s2[0] - 'a' + 1;
    int y2 = s2[1] - '0';

    was[x1][y1] = true;
    dist[x1][y1] = 0;
    q.push({x1, y1});

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 8; i++) {
            int tox = x + dx[i];
            int toy = y + dy[i];

            if (check(tox, toy) && !was[tox][toy]) { 
                was[tox][toy] = true;
                dist[tox][toy] = dist[x][y] + 1;
                q.push({tox, toy});
            }
        }
    }

    int cur_dist = dist[x2][y2];

    if (cur_dist % 2 == 0) {
        cout << cur_dist / 2 << "\n";
    } else {
        cout << "-1" << "\n";
    }

    return 0;
}


