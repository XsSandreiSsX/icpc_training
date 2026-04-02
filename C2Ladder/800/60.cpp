#include <iostream>

using namespace std;

void gen(int depth, int amount) {
    if (depth == 1) {
        for (int i = 0; i < amount; i++) cout << "()";
    } else {
        cout << "(";
        gen(depth - 1, amount - 1);
        cout << ")";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) {
            gen(i, n);
            cout << "\n";
        }
    }
}