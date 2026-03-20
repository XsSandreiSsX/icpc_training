#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 101;

int g[MAXN][MAXN];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }

    int min_m = 3000;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                min_m = min(min_m, g[i][j] + g[j][k] + g[k][i]);
            }
        }
    }

    cout << min_m << "\n";
}