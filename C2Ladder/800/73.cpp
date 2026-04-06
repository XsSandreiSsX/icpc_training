#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector <string> arr(n - 2);

    for (int i = 0; i < n - 2; i++) {
        cin >> arr[i];
    }

    string ans = arr[0];
    bool found = false;

    for (int i = 1; i < n - 2; i++) {
        if (arr[i - 1][1] == arr[i][0]) ans += arr[i][1];
        else {
            ans += arr[i];
            found = true;
        }
    }

    if (!found) {
        ans += 'a';
    }

    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}