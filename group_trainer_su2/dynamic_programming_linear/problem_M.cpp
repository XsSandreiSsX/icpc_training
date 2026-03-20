#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int const MAXN = 1000;

vector <int> pos;
vector <bool> connected;
int main() {
    int n; cin >> n;

    for (int i = 0, x; i < n; i++) {
        cin >> x;
        pos.push_back(x);
        connected.push_back(false);
    }

    sort(pos.begin(), pos.end());

    int answer = 0;

    for (int i = 0; i < n; i++) {
        long long potential_cost = 10e7;
        if (i != n - 1) {
            potential_cost = 
        }
        answer += min(abs(cost[i] - cost[i-1]), abs(cost[i+1] - cost[i]));
    }

    cout << answer << "\n";

  
    return 0;
}