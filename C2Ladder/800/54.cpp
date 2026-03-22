#include <iostream>

using namespace std;

void solve() {
    long long number; cin >> number;

    if (number % 2 == 0) {
        cout << "0\n";
        return;
    }
    int answer = -1;
    while(number >= 10) {
        int num = number % 10;
        if (num % 2 == 0) {
            answer = 2;
        }
        number /= 10;
    }

    if (number % 2 == 0) {
        answer = 1;
    }

    cout << answer << "\n";

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}