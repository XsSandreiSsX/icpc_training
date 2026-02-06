#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;

            if (i == j && x == 1) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}
