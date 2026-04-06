#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    string s; cin >> s;
    s = s + "##";
    //WUBXWUB
    int i = 0;
    bool space = false;
    while (i < s.size() - 2) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 3;
            if (space) {
                cout << " ";
                space = 0;
            } else continue;
        } else {
            if (!space) space = 1;
            cout << s[i];
            i++;
        }
        
    }
}

int main() {
    //IOS;
    //int t; cin >> t;
    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}