#include <iostream>

using namespace std;

void solve() {
    long long num; cin >> num;
    int c1 = num / 3;
    int c2 = c1;
    if (num % 3 == 1) c1++;
    else if (num % 3 == 2) c2++;

    cout << c1 << " " << c2 << "\n";

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}