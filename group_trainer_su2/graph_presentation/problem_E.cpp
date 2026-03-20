#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;

    vector<vector<int>> g(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int jj; cin >> jj;
            g[i].push_back(jj);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (g[i][j] != g[j][i]) {
                cout << "NO";
                return 0;
            }
        }

    }
    
    cout << "YES";
    return 0;
}