#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n, k; cin >> n >> k;
    vector <int> arr(n);
    vector <int> newa;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int last = -1;
    int ik; cin >> ik;
    ik--;
    int newk = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != last) {
            newa.push_back(arr[i]);
            last = arr[i];
            if (i <= ik) newk++;
        }
    }

    int left = newk - 1;
    int right = (int)newa.size() - newk;

    int ans = max(left, right);
    if (ans % 2 == 1) ans++;

    cout << ans << "\n";
}

int main() {
    IOS;
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}