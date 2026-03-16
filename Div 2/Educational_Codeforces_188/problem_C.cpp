#include <iostream>

using namespace std;
using ull = unsigned long long;

ull gcd(ull a, ull b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ull lcm(ull a, ull b) {
    return a / gcd(a, b) * b;
}

void solve() {
    ull a, b, c; cin >> a >> b >> c;
    ull m; cin >> m;

    ull A = m / a;
    ull B = m / b;
    ull C = m / c;

    ull AB = m / lcm(a, b);
    ull AC = m / lcm(a, c);
    ull BC = m / lcm(b, c);

    ull ALL = m / lcm(lcm(a, b), c);

    ull onlyA = A - AB - AC + ALL;
    ull onlyB = B - AB - BC + ALL;
    ull onlyC = C - AC - BC + ALL;

    ull onlyAB = AB - ALL;
    ull onlyAC = AC - ALL;
    ull onlyBC = BC - ALL;

    ull cntA = 6 * onlyA + 3 * onlyAB + 3 * onlyAC + 2 * ALL;
    ull cntB = 6 * onlyB + 3 * onlyAB + 3 * onlyBC + 2 * ALL;
    ull cntC = 6 * onlyC + 3 * onlyAC + 3 * onlyBC + 2 * ALL;

    cout << cntA << " " << cntB << " " << cntC << "\n";

    
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}