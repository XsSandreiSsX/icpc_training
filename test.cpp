#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n; cin >> n;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int mn = a[0];
    set<int> xyevie;

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > mn) {
            xyevie.insert(a[i]);
        } else {
            mn = a[i];
        }
    }

    cout << xyevie.size() << "\n";
    return 0;
}