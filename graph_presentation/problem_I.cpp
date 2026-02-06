#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> g;

int main() {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x; cin >> x;
            if (j > i && x == 1) {
                g.push_back({i, j});
            }
        }
    }

    cout << g.size() << "\n";

    for (pair v : g) {
        cout << v.first << " " << v.second << "\n";

    }

    return 0;
}