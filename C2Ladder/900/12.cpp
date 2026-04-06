#include <iostream>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)


void solve() {
    long long x1, p1, x2, p2; cin >> x1 >> p1 >> x2 >> p2;
    
    int pmin = min(p1, p2);

    p1 -= pmin;
    p2 -= pmin;

    if (p1 >= 7) {
        cout << ">\n";
        return;
    }
    if (p2 >= 7) {
        cout << "<\n";
        return;
    }

    for (int i = 0; i < p1; i++) {
        x1 *= 10; 
    }
    for (int i = 0; i < p2; i++) {
        x2 *= 10;
    }

    if (x1 == x2) {
        cout << "=\n";
    } else if (x1 > x2) {
        cout << ">\n";
    } else {
        cout << "<\n";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}