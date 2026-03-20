#include <iostream>

using namespace std;

const int MAXN = 101;

int n, m;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

char pole[MAXN][MAXN];
bool was[MAXN][MAXN];

bool check(int x, int y) {
    return (1 <= x && x <= n && 1 <= y && y <= m && pole[x][y] == '#');
}

void dfs(int x, int y) {
    was[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int tox = x + dx[i];
        int toy = y + dy[i];

        if (check(tox, toy) && !was[tox][toy]) {
            dfs(tox, toy);
        }
    }

}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char x; cin >> x;
            pole[i][j] = x;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (pole[i][j] == '#' && !was[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << "\n";

    return 0;


}