#include <iostream>
#include <vector>

using namespace std;

int in[101], out[101];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        out[x]++;
        in[y]++;
    }

    vector<int> sources, sinks;

    for (int v = 1; v <= n; v++) {
        if (in[v] == 0) sources.push_back(v);
        if (out[v] == 0) sinks.push_back(v);
    }

    cout << sources.size() << "\n";
    for (int v : sources) cout << v << " ";
    cout << "\n";

    cout << sinks.size() << "\n";
    for (int v : sinks) cout << v << " ";
    cout << "\n";

}