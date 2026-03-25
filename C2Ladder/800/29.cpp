#include <iostream>

using namespace std;

void solve() {
    string s; cin >> s;

    int cntA = 0;
    int cntB = 0;
    int cntC = 0;

    for (char let : s) {
        if (let == 'A') cntA++;
        else if (let == 'B') cntB++;
        else cntC++;
    }

    if (cntA + cntC == cntB) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}