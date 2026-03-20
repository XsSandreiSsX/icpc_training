#include <iostream>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
const int MAXN = 501;

long long pr[MAXN][MAXN];
int main() {
    int n, m, k; cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1, cell; j <= m; j++) {
            cin >> cell;
            pr[i][j] = cell + 
                       pr[i][j-1] + 
                       pr[i-1][j] - 
                       pr[i-1][j-1];
        }
    }

    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= m; j++) {
    //         cout << pr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    while(k--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << pr[x2][y2] - pr[x1-1][y2] - pr[x2][y1-1] + pr[x1-1][y1-1] << "\n";
    }





    return 0;
}