#include <iostream>

using namespace std;

const int MAXN = 51;

void solve() {
    int n, m, r, c; cin >> n >> m >> r >> c;
    char arr[MAXN][MAXN];
    
    int blc = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'B') blc++;
        }
    }

    if (blc == 0) {
        cout << "-1\n";
        return;
    }

    if (arr[r][c] == 'B') {
        cout << "0\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i][j] == 'B' && (r == i || c == j)) {
                cout << "1\n";
                return;
            }
        }
    }

    cout << "2\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}