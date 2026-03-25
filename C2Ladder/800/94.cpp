#include <iostream>

using namespace std;

void solve() {
    int num; cin >> num;

    int digit = num % 10;
    int cnt = 0;
    while(num > 0) {
        num /= 10;
        cnt++;
    }

    int sum = (1 + cnt) * cnt / 2;
    sum += (digit - 1) * 10;
    

    cout << sum << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}