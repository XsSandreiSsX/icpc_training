#include <iostream>
#include <vector>
#include <queue>
#include <tuple>


using namespace std;

const int MAXN = 501;

char pole[MAXN][MAXN];
int was[MAXN][MAXN];
queue <tuple <int, int, int> > q;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int n, m, k;

bool check(int x, int y) {
    return (1 <= x && x <= n && 1 <= y && y <= m && pole[x][y] == '.');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("fire.in", "r", stdin);
    freopen("fire.out", "w", stdout);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> pole[i][j];
            was[i][j] = -1;
        }
    }

    while(k--) {
        int x, y, s; cin >> x >> y >> s;

        if (check(x, y) && was[x][y] < s) {
            was[x][y] = s;
            q.push({x, y, s});
        }
        
    }

    while (!q.empty()) {
        // https://www.youtube.com/shorts/jDDZuja7I34
        auto [x, y, s] = q.front();
        q.pop();

        if (was[x][y] != s) continue;

        if (s == 0) continue;

        for (int i = 0; i < 4; i++) {
            int tox = x + dx[i];
            int toy = y + dy[i];

            int next_s = s - 1;

            if (check(tox, toy) && was[tox][toy] < next_s) {
                was[tox][toy] = next_s;
                q.push({tox, toy, next_s});

            }

        }
    }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= m; j++) {
    //         cout << was[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (was[i][j] > -1) cnt++;
        }
    }

    cout << cnt << "\n";

    

    return 0;
}