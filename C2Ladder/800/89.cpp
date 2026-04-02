#include <iostream>

using namespace std;

const int MAXN = 21;


void solve() {
    int h, w; cin >> h >> w;
    bool arr[MAXN][MAXN];
    
    int skip = 0;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i = 1; i <= w; i += 2) arr[1][i] = 1;
    for (int i = 3; i <= h; i += 2) arr[i][w] = 1;
    for (int i = 1; i <= w - 2; i += 2) arr[h][i] = 1;
    for (int i = 1; i <= h - 2; i += 2) arr[i][1] = 1;
 
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
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