#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    cout << s << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}
 
