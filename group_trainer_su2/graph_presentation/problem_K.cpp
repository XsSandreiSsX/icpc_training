#include <iostream>

using namespace std;

int g[101] = {0};

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (x == 1 && i == j) {
                g[i] += 2;
            } else if (x == 1) {
                g[i]++;

            }
        }
    }

    for (int i = 0; i < n; i ++) {
        cout << g[i] << " ";
    }

    return 0;
}