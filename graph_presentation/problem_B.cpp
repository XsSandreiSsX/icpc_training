#include <iostream>
#include <vector>

using namespace std;

int N;
vector <int> g[101];
int color[101];

int main() {
    int bad = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int x; cin >> x;
            if (x == 1 && j > i) {
                g[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < N; i++) cin >> color[i]; 

    for (int v = 0; v < N; v++) {
        for (int to : g[v]) {
            if (color[v] != color[to]) bad++;
        }
    }

    cout << bad << "\n";
    return 0;
}
