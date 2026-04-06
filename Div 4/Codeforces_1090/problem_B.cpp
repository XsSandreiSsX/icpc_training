#include <iostream>
#include <vector>
#include <algorithm>

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long;
using namespace std;

void solve() {
    vector <int> arr(7);
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += -arr[i];
    }

    sum += 2 * arr[6];

    cout << sum << "\n";

}

int main() {
    IOS;
    int t; cin >> t;
    while(t--) {
        solve();
    }
}