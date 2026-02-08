#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int a[30005];

    for (int i = 1; i <= n - 1; i++) {
        cin >> a[i];
    }

    int pos = 1;

    while (pos < t) {
        pos = pos + a[pos];
    }

    if (pos == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
