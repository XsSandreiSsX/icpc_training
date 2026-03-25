#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s; cin >> s;
    
    int zcount = 0;
    int ocount = 0;

    for (char let : s) {
        if (let == '0') zcount++;
        else ocount++;

    }

    if (zcount < ocount) cout << zcount << "\n";
    else if (zcount == ocount) cout << ocount - 1 << "\n";
    else cout << ocount << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}