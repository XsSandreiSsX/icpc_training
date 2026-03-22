#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 101;

void solve() {
    int n; cin >> n;
    int a[MAXN];
    int b[MAXN];
    vector <int> dminus;
    vector <int> dplus;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int ssum = 0;
    for (int i = 0; i < n; i++) {
        ssum += b[i] - a[i];
    }

    if (ssum != 0) {
        cout << "-1\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if (b[i] - a[i] < 0) {
            for (int j = 0; j < abs(b[i] - a[i]); j++) {
                dminus.push_back(1 + i);
            }
        } else if (b[i] - a[i] > 0) {
            for (int j = 0; j < (b[i] - a[i]); j++) {
                dplus.push_back(1 + i);
            }
        }
    }

    // cout << dminus.size() << " " << dplus.size() << "\n"; 

    vector <pair<int, int>> op;
    for (int i = 0; i < dplus.size(); i++) {
        pair elem = {dplus[i], dminus[i]};
        op.push_back(elem);
    } 

    cout << op.size() << "\n";
    for (int i = 0; i < op.size(); i++) {
        cout << op[i].second << " " << op[i].first << "\n";
    }

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }



    return 0;
}