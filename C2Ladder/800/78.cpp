#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 101;

void solve() {
    int n, x; cin >> n >> x;
    int arr[MAXN];
    bool was[MAXN];
    vector <int> ans;

    for (int i = 0; i < n; i++) {
        was[i] = false;
        cin >> arr[i];
    
    }

    int summ = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (summ + arr[j] != x && !was[j]) {
                summ += arr[j];
                ans.push_back(arr[j]);
                was[j] = true;
            } 
        }
    }

    if (ans.size() == n) {
        cout << "YES\n";
        for (int num : ans) {
            cout << num << " ";
        }
        cout << "\n";
    } else cout << "NO\n";



}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}