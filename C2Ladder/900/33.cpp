#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    string s; cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') cnt0++;
        else cnt1++;
    }

    if (min(cnt0, cnt1) % 2 == 0) {
        cout << "NET\n";
    } else cout << "DA\n";

}

int main() {
    //IOS;
    int t; cin >> t;
    //int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}