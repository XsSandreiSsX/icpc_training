#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

string combss[] = {"00", "25", "50", "75"};

void solve() {
    string num; cin >> num;

    int ans = 1e9;
    for (string c : combss) {
        int cur_i = 1;
        int cur_ans = 0;
        for (int i = num.size() - 1; i >= 0; i--) {
            if (num[i] == c[cur_i]) {
                cur_i--;
                if (cur_i < 0) break;
            }
            else cur_ans++;
            
            
        }
        if (cur_i < 0) {
            ans = min(ans, cur_ans);
        }
            

    }

    cout << ans << "\n";
    

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