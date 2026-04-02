#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> arr(n);

    int arrS = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arrS += arr[i];
    }

    if (arrS % n != 0) {
        cout << "-1\n";
        return;
    }

    arrS /= n;

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arrS) k++;

    }

    cout << k << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

    