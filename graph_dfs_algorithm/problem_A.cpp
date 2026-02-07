#include <iostream>
#include <vector>

using namespace std;

vector <int> g[101];
bool was[101];
int cnt = 0;


void dfs(int v) {
    was[v] = true;
    cnt++;
    
    for (int to : g[v]) {
        if (!was[to]) {
            dfs(to);
        }
    }
}

int main() {
    int N, S;
    cin >> N >> S;
    S--;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                g[i].push_back(j);
            }
        }
    }
    
    dfs(S);
    cout << cnt << endl;
    
    return 0;
}