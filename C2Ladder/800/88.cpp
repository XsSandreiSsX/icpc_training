#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    map <int, int> count;
    
    for (int i = 0, num; i < n; i++) {
        cin >> num;
        count[num]++;
    }

    for (int i = 0; i < 101; i++) {
        if (count[i] >= 1) {
            cout << i << " ";
            count[i]--;
        }
    }

    for (int i = 0; i < 101; i++) {
        while(count[i]--) {
            cout << i << " ";
        }
    }

    cout << "\n";
    
    
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}