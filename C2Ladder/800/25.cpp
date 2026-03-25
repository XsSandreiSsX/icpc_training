#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    string enemy; cin >> enemy;
    string im; cin >> im;
    
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (im[i] == '0') {
            continue;
        }
        if (i != 0 && enemy[i-1] == '1') {
            enemy[i-1] = '2';
            answer++;
        } else if (enemy[i] == '0') {
            enemy[i] = '0';
            answer++;
        } else if (i != n - 1 && enemy[i+1] == '1') {
            enemy[i+1] = '2';
            answer++;
        }
    }

    cout << answer << "\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}