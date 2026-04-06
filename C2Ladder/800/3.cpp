#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int sum = 0;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            sum += x;
        }

        if (sum < n) {
            cout << 1 << "\n";
        } else {
            cout << sum - n << "\n";
        }
    }
}