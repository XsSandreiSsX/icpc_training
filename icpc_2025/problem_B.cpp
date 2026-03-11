#include <iostream>
#include <queue>

#define ll long long

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    priority_queue <ll> alice;
    priority_queue <ll> bob;

    bool isAlice = true;

    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        alice.push(num);
    }

    for (int i = 0; i < m; i++) {
        ll num; cin >> num;
        bob.push(num);
    
    }

    while (!alice.empty() && !bob.empty()) {
        ll maxAlice = alice.top();
        ll maxBob = bob.top();
        ll ans = 0;
        if (isAlice) {
            bob.pop();

            ans = maxBob - maxAlice;
            if (ans > 0) {
                bob.push(ans);
            }
            isAlice = false;
            
        } else {
            alice.pop();
            ans = maxAlice - maxBob;
            if (ans > 0) {
                alice.push(ans);
            }
            isAlice = true;

        }
    }

    if (alice.empty()) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {
    int tests; cin >> tests;

    while(tests--) {
        solve();
    }

    return 0;
}