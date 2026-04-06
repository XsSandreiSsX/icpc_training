#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve() {
    int n; cin >> n;

    int i = 2;
    int div = 3;
    while (true) {
        if (n % div == 0) {
            cout << n / div << "\n";
            break;
        } else {
            i *= 2;
            div += i;
        }

    }
    

}

int main() {
    //IOS;
    int t; cin >> t;
    //int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}