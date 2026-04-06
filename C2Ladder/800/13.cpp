#include <iostream>

using namespace std;

void solve() {
    int x1, y1; cin >> x1 >> y1;
    int x2, y2; cin >> x2 >> y2;
    int x3, y3; cin >> x3 >> y3;

    int dist = 0;
    if (x1 == x2) {
        dist = abs(y1 - y2);
        if (x3 == x1 && min(y1, y2) < y3 && y3 < max(y1, y2)) dist += 2;
    } else if (y1 == y2) {
        dist = abs(x1 - x2);
        if (y3 == y1 && min(x1, x2) < x3 && x3 < max(x1, x2)) dist += 2;
    } else {
        dist = abs(x1 - x2) + abs(y1 - y2);
    }

    cout << dist << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}