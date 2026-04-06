#include <iostream>

using namespace std;

void solve() {

}

int main() {
    int t; cin >> t;
    while(t--) {
        int k; cin >> k;

        int i = 1;
        while (true) {
            if (i % 3 == 0 || i % 10 == 3) {
                i++;
                continue;
            }

            if (--k == 0) {
                cout << i << "\n";
                break;
            }

            i++;
        }
    }

    return 0;
}