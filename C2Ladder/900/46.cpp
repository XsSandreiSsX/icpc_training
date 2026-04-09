#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n, m; cin >> n >> m;
    
    bool ok = false;
    int square[2][2];
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> square[i][j];
            }
        }

        //cout << square[0][1] << " " << square[1][0] << "\n";
        if (square[0][1] == square[1][0]) {
            //cout << "..." << "\n";
            ok = true;
        }
    }

    if (m % 2 == 1) {
        cout << "NO\n";
        return;
    }

    //cout << ok << "\n";
    if (ok) cout << "YES\n";
    else cout << "NO\n";    

}

int main() {
    //IOS;
    int t; cin >> t;
    //int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}