#include <iostream>
#include <map>

using namespace std;

void solve() {
    string alphabet; cin >> alphabet;
    string w; cin >> w;
    int n = w.size();
    int cost = 0;

    map <char, int> alph;
    for (int i = 0; i < 25; i++) {
        alph[alphabet[i]] = i+1;
    }

    for (int i = 0; i < n - 1; i++) {
        cost += abs(alph[w[i]] - alph[w[i+1]]);
    }
    

    cout << cost << "\n";
    

}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }


    return 0;
}