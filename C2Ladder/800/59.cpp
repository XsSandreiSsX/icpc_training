#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    vector <int> cnt1; // четные
    vector <int> cnt2; // нечетные

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num % 2 == 0) cnt1.push_back(num);
        else cnt2.push_back(num);
    }

    for (int num : cnt2) cout << num << " ";
    for (int num : cnt1) cout << num << " ";
    cout << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}