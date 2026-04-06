#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    char LR; cin >> LR;
    string s; cin >> s;

    map <int, char> m1;
    map <char, int> m2;
    string constt = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 1; i <= constt.size(); i++) {
        m1[i] = constt[i];
        m2[constt[i]] = i;
    }
    int z = 0;
    if (LR == 'L') z = +1;
    else z = -1; 

    for (int i = 0; i < s.size(); i++) {
        cout << m1[m2[s[i]]+z];
    }
    cout << "\n";


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