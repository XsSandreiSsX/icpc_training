#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> g[101];
    int N, M;
    cin >> N >> M;

    for (int t = 0; t < M; t++) {
        int i, j;
        cin >> i >> j;
        g[i].push_back(j);
        g[j].push_back(i);
    }

    for (int v = 1; v < N+1; v++) {
        cout << g[v].size() << " ";
    }

    return 0;
}
