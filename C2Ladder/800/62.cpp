#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b, c; cin >> a >> b >> c;
        if ((a + b - 2 * c) % 3 == 0) {
            cout << "0\n";
        } else cout << "1\n";
    }

    return 0;
}