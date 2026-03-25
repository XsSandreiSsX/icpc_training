#include <iostream>

using namespace std;

const int MAXN = 407;

void solve() {
    int n; cin >> n;
    char arr[MAXN][MAXN];

    pair <int, int> f = {-1, -1};
    pair <int, int> s = {-1, -1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '*') {
                if (f.first == -1) f = {i, j};
                else s = {i, j};
            }
        }
    }

    if (f.first == s.first) {
        for (int i = -1; i <= 1; i += 2) {
            if (0 <= f.first + i && s.first + i < n) {
                arr[f.first + i][f.second] = '*';
                arr[s.first + i][s.second] = '*';
                break;
            }
        }
    }
    else if (f.second == s.second) {
        for (int i = -1; i <= 1; i += 2) {
            if (0 <= f.second + i && s.second + i < n) {
                arr[f.first][f.second + i] = '*';
                arr[s.first][s.second + i] = '*';
                break;
            }
        }

    }
    else {
        arr[s.first][f.second] = '*';
        arr[f.first][s.second] = '*';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}